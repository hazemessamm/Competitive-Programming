import string
x = int(input())
y = str(input())
y = y.lower()
d = dict.fromkeys(string.ascii_lowercase, 0)
i = 0
while i != len(y):
    if y[i] in d:
        d[y[i]] = 1
    i = i + 1

j = any(value == 0 for value in d.values())

if j == True:
    print("NO")
else:
    print("YES")
