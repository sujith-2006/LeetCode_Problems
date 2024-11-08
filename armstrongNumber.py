num = int(input("Enter the number: "))
temp = num
sum1 = 0
k = len(str(num))
for i in range(k):
    sum1 += (num%10) ** k
    num = num // 10

if sum1 == temp:
    print("Number is an armstrong number")
else:
    print("Number is not an armstrong number")
