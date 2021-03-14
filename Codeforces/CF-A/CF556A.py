



n = int(input())

string = input()

counter_ones = 0
counter_zeros = 0

for char in string:
    if char == '0':
        counter_zeros += 1
    else:
        counter_ones += 1

if counter_zeros == counter_ones:
    print(0)
else:
    print(abs(counter_ones - counter_zeros))



