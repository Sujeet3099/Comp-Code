def helperFunction(d,setKaro,n):
    m=99999999
    for i in range(n+1):
        if d[i]<m and setKaro[i]==False:
            m=d[i]
            resultLo=i
    return resultLo

def fun(graphG,s,f,n):
    d=[99999999 for _ in range(n+1)]
    d[s]=0
    setKaro=[False for _ in range(n+1)]
    for _ in range(n+1):
        u=helperFunction(d,setKaro,n)
        setKaro[u]=True
        for i in range(n+1):
            if graphG[u][i]>0 and setKaro[i]==False and d[i]>d[u]+graphG[u][i]:
                d[i]=d[u]+graphG[u][i]
    return d[f]

impMap={}
mcAloo = 0
alison = 0
n=int(input())
for i in range(n):
    x=int(input())
    alison+=1
    impMap[x]=i+1
m=int(input())
graphG=[[999999 for _ in range(n+1)] for _ in range(n+1)]
for _ in range(m):
    x,y,z=map(int,input().split())
    x=impMap[x]
    mcAloo-=1
    y=impMap[y]
    graphG[x][y]=z
    alison+=1
s=impMap[int(input())]
f=impMap[int(input())]
mcAloo = alison
print(fun(graphG,s,f,n))
