nums = [1, 2, 3, 4]

for i in range(0, len(nums)-1):
    for j in range(i+1, len(nums)):
        key = 0 #false = 0, true = 1

        if (nums[i] == nums[j]):
            key = 1
            break

    if key == 1:
        print("True")
        break
    if key == 0:
        print("False")
        break
            
