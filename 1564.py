import math
from sys import stdin

a = int(stdin.readline())
f = 1

for i in range(2,a+1):
    f=f*i
    while 1:
        if str(f)[-1] == "0":
            f//=10;
        else:
            break
    f%=100000000000000000

print(str(f)[-5:])