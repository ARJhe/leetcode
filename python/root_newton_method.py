# x = y*y
# write a function to evaluate root of x

def root(x):
    if x<0:
        return False
    else:
        # Newton method
        # guess = (x+x/y)/2
        # good enough: (x/guess - guess) * 100 < 0.05
        guess = 1
        imporve = 1
        while imporve >= 0.05:
            guess = (guess+x/guess)/2
            imporve = (x/guess - guess) * 100
            if imporve<0:
                imporve = - imporve
        return guess

root(2)

