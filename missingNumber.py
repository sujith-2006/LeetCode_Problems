nums = [0,1]
nums.sort()

for i in range(len(nums)):
    res = len(nums)
    res += i - nums[i]

print(res)
