# 'abcabcbd;
# 'bbbbb'
# 'pwwkew'
def subs(s:str):
    count = 0
    b = []
    for i in s:
        t = i
        for j in s[count+1:]:
            if j!=i:
                t = t + j
            else:
                break
            ck = False
            for c in range(len(t)):
                if t.count(t[c]) >1:
                    ck = True
                    break
            if not ck:
                b.append(len(t))
        count += 1
    return b

s = 'abcabcb'
x = subs(s)
