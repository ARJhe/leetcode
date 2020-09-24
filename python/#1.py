# Given nums = [2, 7, 11, 15], target = 9,
# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].
# Given nums = [2, 7, 11, 15], target = 9,
# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].
def twoSum_brute_force(nums, target):
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
                checked_list[target-nums[i]] = pos
                ans.append(i)
                ans.append(pos)
    return ans

# too many in loop takes los of time
# actually less loop can accelerate speed


# Given nums = [2, 7, 11, 15], target = 9,
# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].
def twoSum_hash_table(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    # {pair : pos}
    checked_list = {}
    for pos, pair in enumerate(nums):
        another = target - pair
        if another not in checked_list:
            checked_list[pair] = pos
        else:
            return [pos, checked_list[another]]

