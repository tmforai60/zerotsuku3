import pandas as pd
import warnings
warnings.simplefilter('ignore')

df_train = pd.read_csv("train.csv",index_col=0)
df_test = pd.read_csv("test.csv",index_col=0)
df_submit = pd.read_csv("submit.csv", index_col=0)

#sibspとparchを足してfamily列を作成
df_train['family'] = df_train['sibsp'] + df_train['parch']

#embarked Sの運賃平均の逆数を表示
fare_ave_enbS = (sum(df_train['fare'][df_train['embarked']=='S'])+sum(df_test['fare'][df_test['embarked']=='S']))/(len(df_train['fare'][df_train['embarked']=='S']) + len(df_test['fare'][df_test['embarked']=='S']))
print(1/fare_ave_enbS)

#embarked Cの運賃平均の逆数を表示
fare_ave_enbC = (sum(df_train['fare'][df_train['embarked']=='C'])+sum(df_test['fare'][df_test['embarked']=='C']))/(len(df_train['fare'][df_train['embarked']=='C']) + len(df_test['fare'][df_test['embarked']=='S']))
print(1/fare_ave_enbC)

#embarked Qの運賃平均の逆数を表示
fare_ave_enbQ = (sum(df_train['fare'][df_train['embarked']=='Q'])+sum(df_test['fare'][df_test['embarked']=='Q']))/(len(df_train['fare'][df_train['embarked']=='Q']) + len(df_test['fare'][df_test['embarked']=='Q']))
print(1/fare_ave_enbQ)

df_train.embarked = df_train.embarked.replace(['S', 'C', 'Q'], [1/fare_ave_enbS, 1/fare_ave_enbC, 1/fare_ave_enbQ])
df_train.sex = df_train.sex.replace(['male', 'female'], [0, 1])
df_train['age'].fillna(df_train.age.median(), inplace=True)
df_train['embarked'].fillna(df_train.embarked.median(), inplace=True)
df_train.isnull().sum()
df_train = df_train[["survived", "pclass", "sex", "family", "age", "fare", "embarked"]]
df_train.info()
from sklearn import tree
df_test.embarked = df_test.embarked.replace(['S', 'C', 'Q'], [1/fare_ave_enbS, 1/fare_ave_enbC, 1/fare_ave_enbQ])
df_test.sex = df_test.sex.replace(['male', 'female'], [0, 1])
df_test['age'].fillna(df_test.age.median(), inplace=True)
df_test['embarked'].fillna(df_test.embarked.median(), inplace=True)

#sibspとparchを足してfamily列を作成
df_test['family'] = df_test['sibsp'] + df_test['parch']

df_test = df_test[["pclass", "sex", "family", "age", "fare", "embarked"]]
my_prediction_tree.shape
my_prediction_tree
df_submit['y'] = my_prediction_tree
df_submit
df_submit.to_csv('submission_detail_1.csv')
