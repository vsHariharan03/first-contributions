def check(s,p):
    ans=0
    if(len(s)!=len(p)):
        return 0
    for i in range(len(s)):
        if(s[i]=='_' or p[i]=='_'):
            continue
        if( s[i]!=p[i]):
            return 0
    return 1

def find(s,p,st):
    for i in range(st,len(s)-len(p)+1):
        #if (s[i:i+len(p)]==p):
        if (check(s[i:i+len(p)],p)):
            return i
    return -1
def isMatch( s, p):
    st=0
    p=p.split('*')
    #print(p)
    n=0
    #print(s,p[0])
    #print(s[len(s)-len(p):len(s)],p[-1])
    if (len(p)==1):
        if (p[0]==s):
            return 1
        else:
            return 0
        
    if(check(s,p[0])!=0):
        #print(s,p[0])
        return 0
    if(check(s[len(s)-len(p):len(s)],p[-1])==-1):
        #print(s[len(s)-len(p):len(s)],p[-1])
        return 0
    for i in range(len(p)):
        n=find(s,p[i],st)

        if (n==-1):
            return 0
        else :
            st=n

        return 1
    
print(find('lmue','',0))
print(check('lmee','l_ee'))
print(isMatch('aa',"a"))