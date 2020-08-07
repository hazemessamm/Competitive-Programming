
fib_recorder = dict()


#Initial fib values
fib_recorder[1] = 1
fib_recorder[2] = 1

#Dynamic Programming is used here to memoize the N values for optimizing the function.
#Some function calls will be free which means it will have O(1) because it will just retrive the value from the dictionary.
def fib(n):
    if n == 0:
        return 0
    if n == 1 or n == 2:
        return 1
    else:
        if n in fib_recorder:
            return fib_recorder[n]
        else:
            fib_recorder[n] = fib(n-1) + fib(n-2)
            return fib_recorder[n]




final_sum = 0
value = 1
result = 0

#To populate the fib_recorder dictionary until the value result produces a result which is less than or equal 4000000.
while result <= 4000000:
    result = fib(value)
    value += 1

#retriving the values to get the even values and sum them.
for key, value in fib_recorder.items():
    if value % 2 == 0 and value <= 4000000:
            final_sum += value

print(final_sum)

