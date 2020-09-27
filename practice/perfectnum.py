import math
def perfect(n):
    a=1
    for i in range(2,n//2+2,1):
        if n%i==0:
            #print('i',i)
            a+=i
    #print(n, a)
    return a==n

for i in range(2,9000):
    if perfect(i+1):
        print(i+1)