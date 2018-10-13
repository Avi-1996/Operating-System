import math
def L(x):
    return (math.log10(x) / math.log10(2));
def powerOfTwo(n):
    return math.floor(math.L(n))

def m1():
    pageNO = 5
    pageSize = 1024
    noOfFrame = 8
    res = powerOfTwo(pageNO)
    res +=powerOfTwo(pageSize)
    print("Page bit ",res)
    res = powerOfTwo(noOfFrame)
    res+=powerOfTwo(pageSize)
    print("Frame Bit ",res)
