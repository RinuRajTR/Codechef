import math
T = int(input())
while T>0:
    H,W,X,Y,K = tuple(map(int,input().split()))
    ss = math.sqrt((W-X)**2 + (H-Y)**2)
    if ss < K:
        print(1)
    else:
        print(0)
    T=T-1
