# coding: UTF-8
def add(num01,num02):
    print(num01+num02)

def add2(num01,num02):
    return(num01+num02)

def Ave(num01,num02,num03):
    return((num01+num02+num03)/3)

#Returnせず呼び出しのみ
add(1,2)

#Return結果を出力
print(add2(1,1))
#Return結果を一旦変数に格納後出力
a=add2(3,2)
print(a)

#Return結果を出力
print(Ave(9,4,2))
