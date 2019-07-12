length = int(input())
students = list(input())

for i in range(length):
    if ' ' in students:
        students.remove(' ')
    else:
        break

students = list(map(int, students))
assert len(students) == length

teams = dict()
programmers = 0
math = 0
sports = 0
for i in range(len(students)):
    if students[i] == 1:
        programmers = programmers + 1
        teams[str(students[i])] = programmers
    if students[i] == 2:
        math = math + 1
        teams[str(students[i])] = math
    if students[i] == 3:
        sports = sports + 1
        teams[str(students[i])] = sports
if len(teams) < 3:
    print(0)
else:
    minimum = min(teams.items(), key=lambda x: x[1])[1]
    print(minimum)
    counter = 0
    controlbits = [1] * len(students)
    i = 0
    flag = 0
    triplets = [0] * 4
    triplets[0] = 1
    while counter != minimum:
        if controlbits[i] == 1:
            if triplets[students[i]] == 0:
                triplets[students[i]] = 1
                Cond = all(triplets) == 1
                print(i+1, end = ' ')
                controlbits[i] = 0
        if Cond == True:
            counter = counter + 1
            triplets = [0] * 4
            triplets[0] = 1
            Cond = False
            print()
        if i == len(controlbits)-1:
            i = 0
        i = i + 1
      
