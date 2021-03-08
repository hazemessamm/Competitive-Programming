num_levels = int(input())

little_x = list(map(int, input().split()))
little_y = list(map(int, input().split()))

little_x_y = set(little_x[1:] + little_y[1:])

if len(little_x_y) == num_levels:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")

