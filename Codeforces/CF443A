x = input()
dictp = {}
summation = 0
for i in range(len(x)):
    if x[i] == '{' or x[i] == '}' or x[i] == ',' or x[i] == ' ': 
        continue
    else:
        dictp[x[i]] = 0
       
for i in range(len(x)):
    if x[i] == '{' or x[i] == '}' or x[i] == ',' or x[i] == ' ': 
        continue
    else:
        if x[i] in dictp:
            dictp[x[i]] = dictp[x[i]] + 1
            
for keys in dictp:
    if dictp[keys] > 1:
        summation += 1
    else:
        summation += 1

print(summation)
