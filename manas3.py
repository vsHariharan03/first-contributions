s='/Td6WFoAAATm1rRGAgAhARYAAAB0L+Wj4CZ0AVBdABhuJgq/8od1o9eZ+Ge1f2XTdJZ+cumJyMMkeSYchrE/mK6yiKd7ovAMLuxoF49QiOTrNDHS83S7yb62D4g8irR/Lm/DydZLgp5QzKEPEvWLOAU/gxW+yLbV6r4tcSa72SiGMSlowBRYdLTHzUQt7QwH3kJVUILAOjaOS3wQ3puZDVNo8Hp8WUfXEOGEB0Ntmayh/W3mZw2N7NzxSB5CsWjLWEYlnOKK4K5rooPQozKRZ0y2pOXU8BnQ4KqITBC6O9NfyJYt8Ew2fN9UDOkSSQ6iVqxJ3RYcVOoPJtPxZEZCLS5PjcEJN5w2oKv1SdSI3c9f/CrTwnr01T4rceqQuFJd3JyY1uKNznBa5PeIdo1NIUUIQq3tlYrKbJQliZs50pdhXyY//S84Sm9e02h7WjNeam6kj4jLHOELPqbaIWMfbQguUgDs2SX5GG/Kg3jUAAADniElKrhVfQAB7AL1TAAAdc4rELHEZ/sCAAAAAARZWg=='
# Sample code to decode the encoded string
# Use this example to read the encoded string from stdin decode it

import base64
import lzma

def decompress_matrix(string):
    decoded = base64.b64decode(string)
    matrix_str = lzma.decompress(decoded)

    matrix_str = matrix_str.decode('utf-8')

    return matrix_str
  
compressed = input().strip() 
compressed = input().strip()
s = decompress_matrix(compressed)

def clear(l):
    for i in range(len(l)):
        for j in range(len(l[0])-2):
            for k in range(len(l[0][0])-2):
                if l[i][j][k]==1 and l[i][j][k+2]==1:
                    l[i][j][k+1]=1
                    
                if l[i][j][k]==1 and l[i][j+2][k]==1:
                        l[i][j+1][k]=1
                
                if l[i][j][k]+l[i][j+1][k]+l[i][j][k+1]+l[i][j+1][k+1]==3:
                        l[i][j+1][k+1]=1
                        l[i][j+1][k]=1
                        l[i][j][k+1]=1
                        l[i][j][k]=1

                        
                
def disp(l):
    c=0
    for i in l:
        print(c,end=' ')
        c+=1
        for j in i:
            print(j,end='')
        print()

def find_ob(l):
    l1=[]
    for i in range(len(l)):
         for j in range(len(l[0])):
            if i==0 and j==0:
                if l[i][j]==1 and l[i][j+1]==1 and l[i+1][j]==1:
                    l1+=[(i,j)]
            if i==0 and j!=0:
                if l[i][j]==1 and l[i][j+1]==1 and l[i+1][j]==1 and l[i][j-1]==0 :
                    l1+=[(i,j)]
            if i!=0 and j==0:
                if l[i][j]==1 and l[i][j+1]==1 and l[i+1][j]==1 and l[i-1][j]==0 :
                    l1+=[(i,j)]
            if i!=0 and j!=0:
                if l[i][j]==1 and l[i][j+1]==1 and l[i+1][j]==1 and l[i-1][j]==0 and l[i][j-1]==0 and l[i-1][j+1]==0:
                    l1+=[(i,j)]
    return l1
                   
         
def arrange(l):
    l1=[l[0].copy()]
    l2=l[0].copy()
    l2.sort()
    l3=[]
    for i in range(len(l)):
          
        l3=[]
        for j in range(len(l[0])):
            pt=l2[j]
            val=10000
            c=0
            for k in range(len(l[0])):
                dist=(l[i][k][0]-pt[0])**2+(l[i][k][1]-pt[1])**2
                if dist<val:
                        val=dist
                        c=k
            l3+=[l[i][c]]
        l2=l3.copy()
        l1+=[l3.copy()]
    return l1
        
          
 
         


l=[]
s=s.split('\n\n')
for i in s :
    s1=i.split('\n')
    l3=[]
    for j in s1:
        l4=[]
        for k in j:
            l4+=[int(k)]
        l3+=[l4.copy()]
    l+=[l3.copy()]
del l[-1][-1]

clear(l)
clear(l)
clear(l)
clear(l)

l1=[]
#'''
for i in range(len(l)):
     l11=find_ob(l[i])
     
     l1+=[l11.copy()]


ans=arrange(l1)
for i in range(len(ans[0])):
    for j in range(1,len(ans)):
         print(list(ans[j][i]))
    print()
    
   
          
     




        




           