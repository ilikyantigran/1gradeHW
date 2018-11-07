import sklearn
import pandas as pd
import urllib
import urllib.request
from operator import itemgetter,attrgetter
from sklearn import tree
from sklearn.svm import SVC
from sklearn.multiclass import OneVsRestClassifier
from sklearn.preprocessing import LabelBinarizer
from pandas import read_csv
from sklearn.metrics import classification_report,confusion_matrix
from sklearn.cross_validation import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score, roc_auc_score
from sklearn.neural_network import MLPClassifier
#Подгружаем ненужные библиотеки
match_id = []
team1_id = []
team1_name = []
team2_name = []
team2_id =[]
series_type = []
team1_win = []
r1 = []
r2 = []
w1 = []
w2 = []
l1 = []
l2 = []
team_id = []
rating_team = []
name_team = []
win = []
lose = []
#Задаем массивы для хранения инфы
def rating(): #Парсим таблицу команд и сортируем ее
    t = urllib.request.urlopen("https://api.opendota.com/api/teams")
    proteams = t.read().decode().split(",")
    for i in range(0, len(proteams)):
        if proteams[i].startswith('[{"team_id"'):
            team_id.append(proteams[i][12:])
        if proteams[i].startswith('{"team_id"'):
            team_id.append(proteams[i][11:])
        if proteams[i].startswith('"rating"'):
            if proteams[i][9:]=="null":
                rating_team.append(0);
            else:
                rating_team.append(proteams[i][9:]);

        if proteams[i].startswith('"name"'):
            name_team.append(proteams[i][7:])
        if proteams[i].startswith('"wins"'):
            if proteams[i][7:]=="null":
                win.append(0);
            else:
                 win.append(proteams[i][7:])
        if proteams[i].startswith('"losses"'):
            if proteams[i][9:]=="null":
                lose.append(0);
            else:
                lose.append(proteams[i][9:])

def parse():  #Парсим таблицу матчей и сортируем ее
    l = 0
    x = 3824843352
    while l <= 30:
        l += 1
        f = urllib.request.urlopen("https://api.opendota.com/api/proMatches?less_than_match_id="+str(x))
        promatches = f.read().decode().split(",")
        for i in range(0, len(promatches)):
            if promatches[i].startswith('"dire_team_id"'):
                if promatches[i][15:]=="null":
                    team2_id.append(0);
                else:
                    team2_id.append(promatches[i][15:])
            if promatches[i].startswith('"radiant_team_id"'):
                if promatches[i][18:]=="null":
                    team1_id.append(0);
                else:
                    team1_id.append(promatches[i][18:])
            if promatches[i].startswith('"radiant_name"'):
                if promatches[i][15:]=="null":
                    team1_name.append(0);
                else:
                    team1_name.append(promatches[i][15:])
            if promatches[i].startswith('"dire_name"'):
                if promatches[i][12:]=="null":
                    team2_name.append(0);
                else:
                    team2_name.append(promatches[i][12:])
            if promatches[i].startswith('"series_type"'):
                series_type.append(int(promatches[i][14:]))
            if promatches[i].startswith('"radiant_win"'):
                if promatches[i][14:18]=="true":
                    team1_win.append(1)
                else:
                    team1_win.append(0)
            if promatches[i].startswith('[{"match_id"') or promatches[i].startswith('{"match_id"'):
                match_id.append(promatches[i][12:])
        x = int(match_id[-1])
    print(len(team1_id))
def find(a): #Поиск названия команды по ее ID
    b1 =int(team_id.index(a))
    t1 = name_team[b1]
    return t1
def predict():
    base = pd.DataFrame({ #Создаем БД с матчами и их исходами
'Team1radiant':team1_name,
'Team2dire':team2_name,
'Radiant':team1_id,
'Dire':team2_id,
'Bo': series_type,
'Win':team1_win,
                     })
    X = base.loc[:, ['Radiant', 'Dire','Bo']] #Задаем в X аргументы матча
    y = base['Win'] #Задаем в Y исходы матчей
    x = 0
    classifier = tree.DecisionTreeRegressor(max_depth=2000) #Создаем дерево регрессии с глубиной 2000 веток
    classifier.fit(X, y)
    a = input("Team1 ")
    b = input("Team2 ")
    t1 = find(a)
    t2 = find(b)
    print('ser-type',t1,t2)
    while x<=2:
        prediction = classifier.predict([[a,b,x]]) #Исход для 1-й команды
        prediction2 = classifier.predict([[b,a,x]]) #Исход для 2-й команды
        print(x,'     ',prediction,'    ',prediction2) #Показываем результаты в зависимости от типа матча
        x +=1
def start(): #Запуск парсеров для БД и предикт матча(ПЕРЕД ЗАПУСКОМ ОБНУЛИТЬ МАССИВЫ)P.S. Если API OpenDota не работает обнуляем массивы и запускаем заново
    rating()
    parse()
    predict() #После одного запуска start() для предсказывания матча используем predict()

start()
predict()
