nums = [2,2,1,1,1,2,2]

dct = {}

for i in nums:
    if i not in dct:
        dct[i] = 1
    else:
        dct[i] += 1
highest = 0
k = 0
for i in dct:    
    if dct[i] > highest:
        highest = dct[i]
        k = i

print(k)


