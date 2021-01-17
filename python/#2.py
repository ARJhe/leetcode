# Example 1:
# Input: l1 = [2,4,3], l2 = [5,6,4]
# Output: [7,0,8]
# Explanation: 342 + 465 = 807.

# Example 2:
# Input: l1 = [0], l2 = [0]
# Output: [0]

# Example 3:
# Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
# Output: [8,9,9,9,0,0,0,1]

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    """
    You are given two non-empty linked lists representing two non-negative
    integers. The digits are stored in reverse order, and each of their
    nodes contains a single digit. Add the two numbers and return the sum
    as a linked list.

    You may assume the two numbers do not contain any leading zero, except
    the number 0 itself.
    """
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        # Processing if passing ListNode.next is not None
        # Initialize an empty container to hold summation value
        # Previous.next point to current ListNode(val)
        head = ListNode(0)
        cur = head  # reference
        carry = 0
        # [6], [4]
        while l1 or l2 or carry:
            if l1:
                carry += l1.val
                l1 = l1.next
            if l2:
                carry += l2.val
                l2 = l2.next
            carry, val = carry//10, carry % 10
            cur.next = ListNode(val)
            cur = cur.next
        return head.next



def main():
    a0 = ListNode(2)
    a1 = ListNode(4)
    a2 = ListNode(3)
    a0.next, a1.next = a1, a2
    b0 = ListNode(5)
    b1 = ListNode(6)
    b2 = ListNode(4)
    b0.next, b1.next = b1, b2
    LN = Solution().addTwoNumbers(a0, b0)
    ans = [LN.val]
    while LN.next:
        ans.append(LN.next.val)
        LN = LN.next
    print(ans)

if __name__ == '__main__':
    main()




