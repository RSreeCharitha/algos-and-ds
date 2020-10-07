'''
#n = int(input())
#m = int(input())
n=4
m=20
ndv = 0
div = 0
for i in range(1,m+1):
    if i%n==0:
        div+=i
    else:
        ndv+=i
    
print(ndv-div)
-------------

a = [3, 2, 1, 7, 5, 4]
a = [1, 8, 0, 2, 3, 5, 6]
eve = a[::2]
odd=a[1::2]
eve.sort()
odd.sort()
print(eve[-2]+odd[-2])
---------------------

#a = [5, 2, 4, 3, 9, 7, 1]
#s = 9
a=[9,5,8,3,5,6 ]
s=1

a.sort()
if len(a)<2:
    print(-1)
    exit()
flag=0
for i in range(len(a)-1):
    if a[i]+a[i+1]<=s:
        print(a[i]*a[i+1])
        flag=1
        break
if flag==0:
    print(0)
--------------------------------

b=21
n=5678
a=n
l=[]
while(a>0):
    r=a%b
    a=a//b
    if r<10:
        l.append(str(r))
    else:
        l.append(chr(r-10+65))

print(''.join(l[::-1]))
--------------------------------

s = 'Move-Hyphens-to-Front'
t =''


for i in s:
    if i=='-':
        print(i,end='')
    else:
        t+=i
    
print(t)
---------------------------------
b='86'
a='391'
la=len(a)
lb=len(b)
carry=0
if lb>la:
    a,b=b,a
    la,lb=lb,la
a=int(a)
b=int(b)
while(a>0):
    x=a%10
    y=b%10
    if x+y>9:
        carry+=1
    
    a=a/10
    b=b/10
print(carry)

-------------------------------

s = list('apples')
c1='a'
c2='p'
print(s)
for i in range(len(s)):
    if s[i]==c1:
        s[i]=c2
    elif s[i]==c2:
        s[i]=c1

print(''.join(s))
--------------------------- 
Q8

#a = int(input())
#b = int(input())
#c = int(input())
a = 16
c=2
b=20
if c==1:
    print(a+b)
elif c==2:
    print(a-b)
elif c==3:
    print(a*b)
elif c==4:
    print(a/b)
------------------------------------

import math
a=7
b=42

exp=0
i=1
while(exp<b):
    exp=2**i
    i+=1

print(exp//2)
------------------------

m=100
n=160
s=0
for i in range(m,n+1):
    if i%15==0:
        print(i)
        s+=i
print(s)
----------------

n=5
a=[3,4,1,7,9]
eve = a[::2]
odd=a[1::2]
eve.sort()
odd.sort()
print(odd,eve)
print(eve[-2]+odd[-2])

-------------------

n = 12
s=n*10
for i in range(1,10):
    print(n*i,end=',')
    s+=n*i
print(n*10)

print(s)
--------------------------

a=100
b=200
for i in range(a,b+1):
    s = str(i)
    if s==s[::-1]:
        print(s,end=" ")
---------------------
'''




