def ref_isPalindrome():
    return 0

# Runtime: 64 ms, faster than 61.99% of Python3 online submissions for Palindrome Number.
# Memory Usage: 14.3 MB, less than 48.05% of Python3 online submissions for Palindrome Number.
def my_isPalindrome(x: int) -> bool:
    if x < 0:
        return False
    # read from median pos
    l = len(str(x))
    i = l/2 - 1 if l % 2 == 0 else (l-1)/2 -1
    # even: 10,8,6,4,2
    # odd :  9,7,5,3,1
    j = 0
    s = str(x)
    while(j<=i):
        if s[j] != s[l-j-1]:
            return False
        j+=1
    return True



if __name__ == "__main__":
    i = [0,12321]
    for I in i:
        print(isPalindrome(I))