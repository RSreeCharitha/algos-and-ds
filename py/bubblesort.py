def bubble(a,n):
    for i in range(n-1):
        for j in range(n-i-1):
            if a[j]>a[j+1]:
                a[j],a[j+1]=a[j+1],a[j]



a=list(map(int,input().split()))

bubble(a,len(a))

print(a)