class Student:
    def avg(self): #必ずselfをいれる
        print((80+70)/2)

#インスタンス化・オブジェクト化・オブジェクト生成
#構造体の宣言・変数
a001=Student()
a001.avg()


class Student2:
    def avg(self,math,english):
        print((math+english)/2)

b001=Student2()
b001.avg(80,20)

#アトリビュートの定義
b001.name="sato"
print(b001.name)


#初期化メソッド_上記の例だとインスタンス毎に1つずつアトリビュートの
#設定が必要になる。初期化メソッドを使ってattributeを自動付与?
class Student3:

    def __init__(self):
        self.name = ""

    def avg(self,math,english):
        print((math+english)/2)

c001=Student3()
c001.name="Kumo"
print(c001.name)

c002=Student3()
print(c002.name)

 
#インスタンス化と同時にattributeを設定
class Student4:

    def __init__(self,name): #ここで第一引数を設定
        self.name = name

    def avg(self,math,english):
        print((math+english)/2)

d001=Student4("tamai")
print(d001.name)

d002=Student4("nagai")
print(d002.name)

