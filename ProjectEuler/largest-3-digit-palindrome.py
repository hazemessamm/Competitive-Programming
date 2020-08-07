

result = 0
old_result = 0
digitx = 0
digity = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        result = i * j
        if str(result) == str(result)[::-1] and result > old_result:
            old_result = result
            digitx = i 
            digity = j

print(i, j, old_result, result)
