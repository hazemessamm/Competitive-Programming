x = input(str())
y = x.split('+')
y = map(int, y)
y = sorted(y)
for i in range(len(y)-1):
    print(str(y[i])+'+',end='')
print(str(y[-1]))
