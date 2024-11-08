n = 10

key = 0

for i in range(n):
    for j in range(n):
        if (i**2 + j**2 == n**2):
            key+=1


print(key)
