

import string

word = input()

vowels = {"a", "o", "y", "e", "u", "i"}

result = ""

for char in word:
    if char.lower() in vowels:
        continue
    result += "." + char.lower()

print(result)
