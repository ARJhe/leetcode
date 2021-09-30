def myAtoi(s: str) -> int:
    # find integer from string
    # strip
    ns = s.lstrip()
    # check s[0] && s[1]
    l = len(ns)
    prefix = 1
    if ns[0:1] in ["+", "-"]:
        prefix = -1 if ns[0] == "-" else 1
        ns = ns[1:l]
    i=0
    n = 0
    while (i < len(ns) and ns[i].isnumeric()):
        n = n*10 + int(ns[i])
        i+= 1
    res = prefix * n
    max, min = 2**31-1, -2**31

    if max >= n >= min:
        return res
    else:
        return max if res > max else min

if __name__ == "__main__":
    l = ["    -42", "+-1", "+12", "-01", ".1"]
    for i in l:
        print(myAtoi(i))
