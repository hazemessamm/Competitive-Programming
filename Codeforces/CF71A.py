x = int(input())
y = [None] * x
for i in range(x):
    y[i] = input()

for i in range(x):
    if len(y[i]) > 10:
        print(y[i][0] + str((len(y[i])-2)) + y[i][-1])
    else:
        print(y[i])
