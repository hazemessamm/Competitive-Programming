num_friends = int(input())
friends = list(map(int, input().split()))

solution = dict()
for i in range(len(friends)):
    solution[friends[i]] = i+1

for i in range(1,len(solution)+1):
    print(solution[i],end=' ')
