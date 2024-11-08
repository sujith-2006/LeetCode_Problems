s = "racecar"
t = "carrace"

dict1 = {}
dict2 = {}

lst1 = list(s)
lst2 = list(t)
for i in lst1:
    if i in dict1:
        dict1[i] += 1
    else:
        dict1[i] = 1
for i in lst2:
    if i in dict2:
        dict2[i] += 1
    else:
        dict2[i] = 1

print(dict1)
print(dict2)
print(dict1 == dict2)
