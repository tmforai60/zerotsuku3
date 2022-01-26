class Student5:

    def __init__(self,name):
        self.name = name

    def calculateAvg(self,data):
        sum =0

        for num in data:
            sum+=num

        avg=sum/len(data) #lenはdataのリストの要素数を算出
        return avg

    def judge(self,avg):
        if avg >60:
            result="Congratulations!"
        else:
            result="Make more effort"
        return result

d001=Student5("tamai")
data=[70,40,80,60,90]
avg=d001.calculateAvg(data)
result=d001.judge(avg)
print(d001.name+" : "+result)

d002=Student5("Yanasawa")
data=[70,40,80,30,10]
avg=d002.calculateAvg(data)
result=d002.judge(avg)
print(d002.name+" : "+result)