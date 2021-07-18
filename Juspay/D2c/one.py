def bfs(graph,c,t):
    s=1
    n=len(graph)-1
    dist=[]
    pred=[]
    color=[]
    q=[]
    count=0
    for _ in range(len(graph)):
        dist.append(9999)
        pred.append(None)
        color.append('w')
    q.append(s)
    dist[s]=0
    color[s]='g'
    while len(q)!=0:
        u=q.pop(0)
        if u==n:
            break
        count+=1
        color[u]='b'
        for i in graph[u]:
            if color[i]=='w':
                q.append(i)
                color[i]='g'
                dist[i]=dist[u]+c
                pred[i]=u
    return dist[n]

n,m,t,c=map(int, input().split())
graph=[[] for _ in range(n+1)]
for _ in range(m):
    x,y=map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)
time=bfs(graph,c,t)
signal='g'
signals=[None]
for _ in range(t):
    signals.append('g')
for i in range(t,time+1):
    if i==0:
        continue
    if (i//t)%2==0:
        signals.append('g')
    else:
        signals.append('r')
for i in range(0, time, c):
    if signals[i]=='r':
        time+=(signals[i+1:].index('g'))

print(time)



def dfs(dictionary,n,t,c,start,timeTaken):
    if(start==n):
        return timeTaken
    k=timeTaken//t
    if(k%2==1):
        timeTaken+=(t*(k+1)-timeTaken)
    minValue=1e13
    for i in dictionary[start]:
        kk=dfs(dictionary,n,t,c,i,timeTaken+c)
        if(kk!=-1):
            minValue=min(minValue,kk);
    if(minValue==1e13):
        return -1
    return minValue
    
n,m,t,c=map(int,input().split())
dictionary={}
for i in range(n+1):
    dictionary[i]=[]
roadMap=[]
for i in range(n):
   a,b=map(int,input().split()) 
   dictionary[a].append(b)

print(dfs(dictionary,n,t,c,1,0))