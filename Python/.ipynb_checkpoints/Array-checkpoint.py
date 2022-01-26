# coding: UTF-8

print("Good morning")

#リスト
print("----List Bofore Change------")
a=["sato","suzuki","takahashi"]
print(a[0])
print(a[1])
print(a[2])

#リストの書き換え
print("----After Change------")
a[1]="marth"
print(a[1])

#リストのリスト
print("----Double List------")
a=[["sato","suzuki"],["takahashi","Tanaka"]]
print(a[0][0])
print(a[0][1])
#print(a[1][0])
print(a[1][1])

#bool型
print("----bool----")
num=1
num01=2
bool01=(num<num01)
print(bool01)
print(type(bool01))

#string型
print("----string----")
string_a="Hello,World"
print(string_a)
print(type(string_a))

#数字
print("----float etc----")
num_01=0.1234
NUM=4

print(num)
print(num01)
print(num_01)
print(type(num_01))
print(NUM)
