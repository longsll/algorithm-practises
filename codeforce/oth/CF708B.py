import math
a , b , c , d = map(int,input().split(' '))
n = int(math.sqrt(a << 1)) + 1
m = int(math.sqrt(d << 1)) + 1

if n < m:
    n -= not b and not c
else :
    m -= not b and not c
if n * (n - 1) != a + a or m * (m - 1) != d + d or m * n != b + c:
    print("Impossible")
else :    
    for i in range(m + n , 0 , -1):
        if b >= m:
            print("0",end="")
            b -= m
        else :
            print("1",end="")
            m -=1
