# cook your dish her
T=int(input())
while T>0:
    N,X=list(map(int,input().split()))
    d=[]
    cost=0
    for j in range(N):
        d.append(int(input()))
    for i in range(len(d)):
        if d[i]==1 or (i!=0 and d[i-1]==1):
            cost+=X
    print(cost)
    T=T-1
