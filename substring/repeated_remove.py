def subs(s:str):
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


        