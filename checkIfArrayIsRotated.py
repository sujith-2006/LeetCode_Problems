"""
THE TIME COMPLEXITY OF THIS PROGRAM IS O(n)
"""
nums = [4, 1, 2, 3]

lt = sorted(nums)
key = 0
for i in range(len(nums)):
    nums.insert(0, nums[-1])
    nums.pop()
    
    if nums == lt:
        key = 1
        break

if key == 1:
    print("True")
else:
    print("False")
