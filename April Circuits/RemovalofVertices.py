t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    l=[]
    for i in range(1,n+1):
        l.append(i)
        
    pos=((k*2)+2)%n;
    s=n
    if (pos==0):
        pos=n
    l.pop(pos-1)
    s=s-1
    pos=pos-1
    while(s!=1):
        #s!=1
    
       pos=pos+2
       if(pos>s and s!=0):
           #s
           pos=pos%(s)
                   #s
          
       l.pop(pos-1)
       s=s-1
       if(s==1):
           #s
           print(l[0])
           break
       pos=pos-1
        

			
