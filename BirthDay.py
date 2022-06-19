import math

n=int(input())

k=[]

for i in range(n):
    R,r=map(int,input().split())
    r=r*(1+2/math.sqrt(3))
    if R>r:
        k.append("Dry")
    else:
        k.append("Wet")

for i in k:
    print(i)
