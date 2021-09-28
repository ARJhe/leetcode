# Runtime: 32 ms, faster than 74.91% of Python3 online submissions for Reverse Integer.
# Memory Usage: 14.2 MB, less than 43.54% of Python3 online submissions for Reverse Integer.
def my_reverse(x):
    if x == 0:
        return 0
    i = 0
    res = ""
    isPos = x > 0
    x = x if isPos else -1 * x
    str_x = str(x)
    lastConstZero = str_x[len(str_x) - 1] == '0'
    while (i < len(str_x)):
        lastConstZero = lastConstZero and str_x[len(str_x) - 1 - i] == '0'
        if not lastConstZero:
            res += str_x[len(str_x) - 1 - i]
        i += 1
    result = int(res) if isPos else -1 * int(res)
    if result > 2147483647 or result < -2147483648:
        return 0
    else:
        return result



# runtime: 32 ms(74.91%), memory: 14.2 MB(43.54%)
def ref_reverse(x):
    isPos = x > 0
    ans=0
    x = -1 * x if not isPos else x
    while(x!=0):
        ans = ans * 10 + (x % 10)
        x = int(x/10)

    res = -1 * ans if not isPos else ans
    if (res > 2147483647 or res < -2147483648):
        return 0
    else:
        return  res


if __name__ == "__main__":
    # 1534236469
    # -123
    print(reverse(-123))
    
