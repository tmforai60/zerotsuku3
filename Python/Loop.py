#繰り返し
print("-----For------")
for i in range(5):
    print(i)

#Break
print("-----Break------")
for i in range(5):
    if i ==3:
        break
    print(i)
 
#Continue
print("-----Continue------")
for i in range(5):
    if i ==3:
        continue
    print(i)

#Nest
print("-----Nest------")
for i in range(3):
    for j in range(3):
        print(i,j,sep="-")

#ListFor
print("-----ForArray------")
arr=[2,4,6,8,10]
for i in arr:
    print(i)    