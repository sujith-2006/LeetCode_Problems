nums = [0, 2, 3, 4, 6, 8, 9]
start = nums[0]
lt = []
for i in range(1, len(nums)):
    if nums[1] != (nums[0] + 1):
        lt.append(str(nums[0]))
    if nums[i] != num[i-1] + 1:
        lt.append(str(start) + '->' + str(nums[i]))
