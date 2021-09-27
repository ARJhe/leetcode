# 3. Longest Substring Without Repeating Characters
# https://leetcode.com/problems/longest-substring-without-repeating-characters/
def subs_brute_force(s:str):
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

def subs_repeated_remove(s:str):
    if len(s) ==0:
        return 0
    maxN=0
    string = ''
    for i in s:
        if i not in string:
            string += i
        else:
            pos = string.find(i)
            string = string[pos+1:] + i
        if len(string)>maxN:
            maxN = len(string)
    return maxN