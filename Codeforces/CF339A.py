x = str(input())
y = str()

for i in range(len(x)):
    if x[i] != '+':
        y = y + x[i]
        
y = list(map(int, y))

y.sort()

for i in range(len(y)):
    if i == len(y)-1:
        print(str(y[i]), end='')
        break
    else:
        print(str(y[i]) + '+', end='')
