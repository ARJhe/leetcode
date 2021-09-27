# 4. Median of Two Sorted Arrays
# https://leetcode.com/problems/median-of-two-sorted-arrays/
import math
def findMedianSortedArrays(nums1, nums2):
    if not nums1 and not nums2:
        return 0
    else:
        c = nums1 + nums2
        c.sort()
        l = len(c)
    if l%2 == 0:
        m = (c[int(l/2)-1] + c[int(l/2)])/2
    else:
        p = math.ceil(l/2)
        m = c[p]
    return m

nums1 = []
nums2 = [3]

findMedianSortedArrays(nums1,nums2)