
T=int(input())
while T>0:
    P,X,Y,Z=map(int, input().split())
    if Z==1:
        P=P+(P*Y/100)
    else:
        P=P-(P*X/100)
    
    print(P)
    T-=1
