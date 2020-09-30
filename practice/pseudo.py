n = int(input())
l = list(map(int,input().split()))
i = int(input())
#l = l[:i-1]+l[i:]
l.pop(i-1)
print(l)