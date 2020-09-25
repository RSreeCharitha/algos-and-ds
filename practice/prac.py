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
    
'''