
#def conv():




def find_ob(l):
    x1=0
    x2=0
    y1=0
    y2=0

    m=len(l)
    n=len(l[0])

    
    for i in range(m):
  
        if sum(l[i])!=0:
            y1=i
            break
    for i in range(y1,m):
  
        if sum(l[i])==0:
            y2=i
            break   

    for i in range(n):
        k=0
        for i1 in range(y2):
            k+=l[i1][i]
        if k!=0:
            x1=i
            break
    
    for i in range(x1,n):
        k=0
        for i1 in range(y2):
            k+=l[i1][i]
        if k==0:
            x2=i
            break
         
    return x1,x2,y1,y2

         
   


def check(l,x1,x2,y1,y2):
    k=0
    for i in range(x1,x2):
        for j in range(y1,y2):
            k+=l[j][i]
    #print(k," --")
    #print((x2-x1)*(y2-y1),int((y2-y1)**2))
    if k==(x2-x1)*(y2-y1):
        return 1,k
    elif k==min(int((y2-y1)**2),int((x2-x1)**2)):
        return 2,k
    else:
        return 3,k

def move_pos(l,x1,x2,y1,y2,value):
    l1=0
    m=len(l)
    n=len(l[0])

    x=0
    y=0
    start=0
    for i in range(y2,m):
        k=0
        for j in range(n):
            k+=l[i][j]
        if k!=0:
            start=i
            break
    #print(m,n,m-(y2-y1),n-(x2-x1),x1,y1)


    for i in range(start,m-(y2-y1)+1):
         for j in range(n-(x2-x1)+1):
             
            k=0
            c=0
            for i1 in range(y1,y2):
                for j1 in range(x1,x2):
                    
                    c=l[i+i1-y1][j+j1-x1]
                    if c==0:
                        c=1
                    else:
                        c=0
                    k+=c*l[i1][j1]
            if k==value:
                x=j
                y=i

                
    
    return x,y


        


        

s='''0 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 1 0 0 0 0 0 0 0 0
    0 0 1 1 1 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 
    0 0 0 0 0 0 0 0 0 0 0 0 
    0 0 0 0 0 0 1 0 0 0 0 0 
    0 0 0 0 0 0 1 1 0 0 0 0 
    0 0 0 0 0 0 1 1 1 1 0 0 
    0 0 0 0 0 1 1 1 0 0 0 0
    0 0 0 1 1 1 1 0 1 1 1 0'''

s=s.split('\n')
l=[]
for i in s:
    l1=[]
    for j in i:
        if j==' ' :
            continue
        l1+=[int(j)]
    l+=[l1.copy()]
m=len(l)
n=len(l[0])
k=m-1


#print()
x1,x2,y1,y2=find_ob(l)
l1=[0 for i in range(n)]
for i in range(y2,m):
    for j in range(n):
        if l[i][j]==1:
            l1[j]=1
        else:
            if l1[j]==1:
                l[i][j]=1

#print(x1,x2,y1,y2)
key,value=check(l,x1,x2,y1,y2)
#print(key,value)
#print(move_pos(l,x1,x2,y1,y2,value))
x,y=move_pos(l,x1,x2,y1,y2,value)
print(key)
print(x-x1,y-y1)






