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
    checked_list = {}
    for pos, pair in enumerate(nums):
        another = target - pair
        if another not in checked_list:
            checked_list[pair] = pos
        else:
            return [pos, checked_list[another]]

