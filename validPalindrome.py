s = "A man, a plan, a canal: Panama"

s = s.lower()
lt = []

for i in s:
    if i.isalnum():
        lt.append(i)
print(lt == lt[::-1])
