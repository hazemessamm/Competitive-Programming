num_cities = int(input())
cities = list(map(int, input().split()))

for i in range(num_cities):
    maximum = max(abs(cities[i]-cities[0]), abs(cities[i]-cities[-1]))
    if i == 0:
        minimum = abs(cities[i]-cities[i+1])
    elif i == num_cities - 1:
        minimum = abs(cities[i] - cities[i-1])
    else:
        minimum = min(abs(cities[i]-cities[i-1]), abs(cities[i]-cities[i+1]))
    print(minimum, maximum)

