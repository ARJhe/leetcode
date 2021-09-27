def convert(s: str, numRows: int) -> str:
    """
        P     I     N
        A   L S   I G
        Y A   H R
        P     I
    """
    if (len(s) <= 1 or numRows <= 1):
        return s
    res =""
    i = 0
    j = 0
    size = 2*numRows-2
    while(i<numRows):        
        j = i
        while(j<len(s)):
            # deal with | element
            res += s[j]
            # deal with / element and ignore top and bottom
            if (j+size - 2*i < len(s) and (i!=numRows-1 and i!=0)):
                res+=s[j+size - 2*i]            
            j+= size
        i+=1
    return res

if __name__ == "__main__":
    s = "AB"
    n = 1
    print(convert(s, 1))

