'''
t = int(input())
count=1
for i in range(t):
    n = int(input())
    b = list(map(int, input().split()))
    m = b[0]
    for j in range(1,n):
        if(m<b[j]):
            count+=1
            m=b[j]
    print(count)
--------------------------------------------

n,m = list(map(int, input().split()))
l = []
for i in range(n):
    l.append([0]*m)

for i in range(n):
    for j in range(m):
        l[i][j] = int(input())

print(l)
-----------------------------


t = int(input())

for _ in range(t):
    s = input()
    d = {}
    for i in s:
        d[i]=d.get(i,0)+1
        if d[i]>=1:
            print(i,end=' ')
        else:
            print(-1,end=' ')


---------------------------------------------------


n = input()
e=0
o=0
for i in range(len(n)):
    if (i+1)%2==0:
        #print(n[i])
        e+=int(n[i])
    else:
        #print(n[i])
        o+=int(n[i])
print(abs(e-o))

-------------------------------------------


s = input('Enter String: ')
kev=0
stu=0
l=len(s)
# start with vowels
for i in range(l):
    if (s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'): #s[i]=a
        for j in range(i+1,l+1): #a, an, ana
            kev+=
# start with consonants
for i in range(l):
    if (s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u'): #suppose s[i] = b
        for j in range(i+1,l+1): #b,ba,ban...
            
            stu.append(s[i:j])
if(len(stu)>len(kev)):
    print(f'Stuart {len(stu)}')
elif(len(stu)<len(kev)) :
    print(f'Kevin {len(kev)}')
else:
    print('Draw')
    
----------------------------------------------

t = int(input())
for _ in range(t):
    total=0
    c , d = list(map(int,input().split()))
    cars = list(map(int,input().split()))
    fine = list(map(int,input().split()))
    if d%2==0:
        for i in range(c):
            if cars[i]%2!=0:
                total+=fine[i]
    else:
        for i in range(c):
            if cars[i]%2==0:
                total+=fine[i]
    print(total)

--------------------------------------
t = int(input()) #
for _ in range(t):
    n = int(input())
    #l='i like sam sung samsung mobile ice cream icecream man go mango'
    l = input().split()
    #l.sort(reverse=True,key=len)
    s = input()
    for i in l:
        if i in s:
            s = s.replace(i,'')
    print(s)
    if s=='':
        print(1)
    else:
        print(0)

--------------------------

l = ['a','b','c','d','e']
p = [4,0,1,2,3]
o=['-']*len(p)

for i in range(len(p)):
    temp=l[i]
    l[i]=l[p[i]]
    l[p[i]]=temp
print(l)

#for i in range(len(p)):
#    o[p[i]]=l[i]

----------
s = 'ab<-bc<-cd<-'
print(s)
if s.startswith('<-'):
    s=s[2:]
while('<-' in s):
    i = s.index('<')
    i-=1
    s=s.replace(s[i:i+3],'')

print('\"'+s+'\"')

----------------------------------------

#a = input()
#k = int(input())
a = 'zzz'
k = 1
for i in a:
    l = ord(i)+k-97
    l=l%26+97
    print(chr(l),end='')

-----
l = ['usr','..','usr','.','bin','.','docker']
o=[]
for i in range(len(l)):
    if l[i]!='.':
        if l[i]=='..' and len(l)!=0:
            o.pop()
        else:
            o.append(l[i])
print('/'.join(o))
----------------------------

import math
#n = [5,5,1,1,2,2,2,2,2]
#n=[3,3,4,4]
#n =[3,4,4,1,1,1,1,2,2,4,1,1,1]
n = [3,1,1,3,1,2,1,1,1,1]
d={}
m = math.floor(len(n)/2)

#print(m)
for i in n:
    d[i]=d.get(i,0)+1
#print(d)
count = 0
for k,i in d.items():
    if i>m:
        val=k
        count+=1
    
if count==1:
    print(val)
else:
    print(-1)
    ----------------------------
    '''
l = [1,2,3,5,6,7,8,30]
mi =l[0]
ma=[0]
o=[]
for i in range(len(l)-1):
    j=i+1
    while l[j]-1==l[j-1]:
        print('deb: ',l[j],l[j-1])
        ma=l[j]
        j+=1
    o.append([mi,ma])
    mi = l[j]

print(o)
    