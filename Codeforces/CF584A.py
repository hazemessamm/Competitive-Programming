

n, div = tuple(map(int, input().split()))
result = -1
num = 1

for i in range(n):
    num *= 10

for i in range(num//10, num):
    if i%div == 0:
        result = i
        break

print(result)
