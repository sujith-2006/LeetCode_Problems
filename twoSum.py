nums = [1, 2, 3, 4, 10]
target = 3

for i in range(len(nums)-1):
    for j in range(i+1, len(nums)):
        if nums[i] + nums[j] == target:
            print(i, j)
            break
