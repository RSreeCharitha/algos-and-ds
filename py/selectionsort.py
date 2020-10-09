def selection(a,n):
    for i in range(n):
        mi = i
        for j in range(i+1,n):
            if a[j]<a[mi]:
                mi=j
        a[mi],a[i]=a[i],a[mi]

a=list(map(int,input().split()))
selection(a,len(a))
print(a)