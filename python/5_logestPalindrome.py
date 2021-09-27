
def longestPalindrome(s):
    res = ""
    curleft=0
    curright=0
    mostleft=0
    mostright=0
    # walk through the string and find beside element
    i = 0
    while (i<len(s)):
        # find with side element
        curleft = i
        curright = i
        # deal with even type ex: baab
        while(curright +1 <len(s) and s[curleft]==s[curright+1]):
            i = curright # i jump to current right pos
            curright += 1
        # odd type
        while(curleft-1 >=0 and curright +1 <len(s) and s[curleft-1]==s[curright+1]):
            curleft=curleft-1
            curright=curright+1
        if ((curright-curleft) > (mostright-mostleft)):
            mostright = curright
            mostleft = curleft
            continue
        i+=1
    res = s[mostleft:mostright+1]
    return res

if __name__ == "__main__":
    s = "ababababababa"
    res = longestPalindrome(s)
    
    print(res)
