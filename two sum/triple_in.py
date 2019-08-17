# Given nums = [2, 7, 11, 15], target = 9,
# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].
def twoSum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    # {pair : pos}
    checked_list= {}
    ans = []
    pos = 0
    for i in range(len(nums)):
        # 如果數字沒被檢視過
        if nums[i] not in checked_list:
            # 如果pair在 除了自己以外的list內
            if target - nums[i] in nums[i+1:]:
                checked_list[nums[i]] = i
                # 要排除自己的pos index(x,start,end)
                pos = nums.index(target-nums[i],i+1) 
                ans.append(i)
                ans.append(pos)
    return ans

nums = [3,3]
target = 6
twoSum(nums,target)