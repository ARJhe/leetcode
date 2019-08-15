# Brute Force
def subs(s:str):
    if len(s) == 0:
        return 0
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
    maxN = 1
    for z in b:
        if z>maxN:
            maxN=z
    return maxN