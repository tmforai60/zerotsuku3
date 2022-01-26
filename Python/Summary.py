class Student5:

    def __init__(self,name):
        self.name = name

    def calculateAvg(self,math,english,society,science,music):
        return (math+english+society+science+music)/5

    def judge(self,result):
        if result >90:
            print("Congratulations!")
        else:
            print("Make more effort")


d001=Student5("tamai")
print(d001.name)
d001_avg=d001.calculateAvg(1000,20,30,40,50)
d001.judge(d001_avg)


d002=Student5("akamaki")
print(d002.name)
d002_avg=d002.calculateAvg(10,20,30,40,50)
d002.judge(d002_avg)