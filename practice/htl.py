n, k = list(map(int,input().split()))
l = input().split()
d = {'R':0, 'Y':1, 'G':2}
t=[]
for i in l:
    t.append(d.get(i,0))
f = [2]*n
sec=0
print('init ',t)
i=0
while True:
    m = min([n,i+k-1])
    #print('min',m)
    for j in range(i,m):
        t[j]+=1
        t[j] = t[j]%(n+1)
    sec+=1
    print(t)

    if(t==f):
        print('fin',t)
        break
    i+=1
    if(i>=n):
        i=i%(n+1)

print(sec)

