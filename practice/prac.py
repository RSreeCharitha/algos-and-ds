n=int(input())
im=[]
for i in range(n):
        im.append(input().split())

#im=[['metals', '200', '3000'], ['fertilizers', '50', '2000'], ['computers', '100', '1000']]
hm=[]
total=0
m=int(input()) 
for i in range(m):
    hm.append(input().split())
if n==m:
    for i in range(m):
        hf = hm[i][0]
        req = int(im[i][1])
        impr = int(im[i][2])
        hpri = int(hm[i][2])
        hav = int(hm[i][1])
        if hav>=req:
            total+=req*hpri
        else:
            total+=hav*hpri
            req-=hav
            total+=req*impr
    print(total)
else:

    hlist = []
    ilist=[]

    for i in im:
        ilist.append(i[0]);
    for i in hm:
        hlist.append(i[0]);

    ma = list(set(ilist)-set(hlist))

    for i in im:
        if i[0]==ma[0]:
            total+=int(i[1])*int(i[2])



    for i in range(m):
        hf = hm[i][0]
        req = int(im[i][1])
        impr = int(im[i][2])
        hpri = int(hm[i][2])
        hav = int(hm[i][1])
        if hav>=req:
            total+=req*hpri
        else:
            total+=hav*hpri
            req-=hav
            total+=req*impr


    print(total)