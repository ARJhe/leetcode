# abcabc
# bbbb
# pwwkew
def subs(s:str):
    if len(s) ==0:
        return 0
    b = []
    # put the max length on chr
    #  012345     012345
    #  112123     121231
    # 'aababc' & 'pwwkew'
    string = ''
    for i in s:
        if i not in string:
            string += i
        elif i in string:
            pos = string.find(i)
            string = string[pos+1 if pos!= 0 else 0:]
        l = len(string)
        b.append(l)
        m = max(b)
    return m

def max(s):
    max = 0
    for i in s:
        if i>max:
            max =i
    return max

x = 'aababc'
y = 'pwwkew'
z = 'abcabca'
subs(x)

        