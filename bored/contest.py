
s='1010110'
n=int(len(s)/2)
if(len(s)%2==0):
    s1=s[0:n]+(s[0:n])[::-1]
else:
    
    s1=s[0:n]+s[n]+(s[0:n])[::-1]
  
print(s1)