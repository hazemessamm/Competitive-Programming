import math

results = list()
x = int()
while True:
    x = int(input())
    if x == 0:
        break
    boolean = math.sqrt(x) * math.sqrt(x) == x
    results.append(boolean)


for i in range(len(results)):
    if results[i] == False:
        print('no')
    else:
        print('yes')
