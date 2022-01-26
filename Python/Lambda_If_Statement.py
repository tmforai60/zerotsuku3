
# 三項演算子による記述
# (条件がTrueの時の値) if (条件) else (条件がFalseの時の値)
a_lambda_function=lambda x:x*2 if x<3 else x

x=2
print(f"x={x} の時{a_lambda_function(x)}")

x=5
print(f"x={x} の時{a_lambda_function(x)}")

# Pattern2
scores=[52,85,90,40,80]
results=map(lambda x: 'PASS' if x>=80 else "False",scores)
print(list(scores))
print(list(results))

