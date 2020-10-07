def partition(a,l,h):
    i=l-1
    piv = a[h]
    for j in range(l,h):
        if(a[j]<piv):
            i+=1
            a[i],a[j]=a[j],a[i]
    
    a[i+1],a[h] = a[h],a[i+1]

    return i+1

def quickSort(a,l,h):
    if l<h:
        pivot = partition(a,l,h)
        quickSort(a,l,pivot-1)
        quickSort(a,pivot+1,h)

def main(): 
    a = list(map(int,input().split()))
    quickSort(a,0,len(a)-1)
    print(a)
 
if __name__=="__main__": 
    main() 