def fun(d,st,en,l,c,t,myAnswer,finalRes,greenColor,ch):
    if myAnswer//t>ch:
        greenColor=not greenColor
        ch+=1
    if st==en:
        finalRes.append(myAnswer)
        return
    for i in d[st]:
        if str(i) not in l[:-1].split():
            if greenColor:
                fun(d,i,en,l+str(i)+" ",c,t,myAnswer+c,finalRes,greenColor,ch)
            else:
                aq=myAnswer%t  
                fun(d,i,en,l+str(i)+" ",c,t,myAnswer+c+t-aq,finalRes,not greenColor,ch)
    return
        
n,m,t,c=map(int,input().split())
d={}
for i in range(m):
    u,v=map(int,input().split())
    if u in d:
        d[u].append(v)
    else:
        d[u]=[v]
    if v in d:
        d[v].append(u)
    else:
        d[v]=[u]
l="1 "
finalRes=[]
greenColor=True
ch=0
ret=fun(d,1,n,l,c,t,0,finalRes,greenColor,ch)
finalRes=set(finalRes)
finalRes=list(finalRes)
finalRes.sort()
if len(finalRes)>1:
    print(finalRes[1])
else:
    print(-1)