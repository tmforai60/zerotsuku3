# coding: UTF-8

#　Lambda関数の前提知識

# 1.高階関数
# 1-1.高階関数max
ls=[3,-8,1,0,7,-5]
print(max(ls))
print(max(ls,key=abs)) #これは関数absを引数として与えるということ

# 1-2.高階関数の自作
def edit_story(words,func):
    for word in words:
        print(func(word))

def enliven(word):
    return word.capitalize()+'!'

stairs=['thud','meow','thud','hiss']

a=edit_story(stairs,enliven) #enlivenが引数として与えられている
print(a)

# 1-3. Lamda関数への置き換え
print(f"\nlambdaによる実装")
b=edit_story(stairs,lambda word: word.capitalize()+'!')
print(b)