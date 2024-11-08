nums = [2, 3, 4, 6, 7, 10, 11]
target = 11
left, right = 0, len(nums) - 1
while left <= right:

    mid  = (left + right) // 2

    if nums[mid] > target:
        right = mid - 1
    elif nums[mid] < target:
        left = mid + 1
    else:
        print(mid)
        break
