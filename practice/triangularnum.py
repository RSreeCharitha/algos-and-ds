def trinum1(n):
    start = [1]
    for i in range(1,n+1):
        print(sum(start),end=" ")
        start.append(i+1)

def trinum2(n):
    for i in range(0,n):
        su=0
        for j in range(i+1):
            su+=j+1
        print(su,end=" ")

n = int(input())
trinum2(n)