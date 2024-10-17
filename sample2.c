
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char* extract(char * s){
    int n=strlen(s)+1;
    
    char* s1=(char*)malloc(n+1);
    s1[0]='\0';

    int start=n;
    for(int i=0;i<n;i++){
        if(s[i]=='+' ){
            start=i+1;
            s1[0]=s[start-1];
            break;
        }
        if(s[i]=='-' ){
            start=i+1;
            s1[0]=s[start-1];
            break;
        }
        if('0'<=s[i] && s[i]<='9' ){
            start=i;
            s1[0]='+';
            break;
        }
        else if (s[i]==' ')
            continue;
        else
         break;
     }
     
     for(int i=start;i<n;i++){
        if('0'<=s[i]&& s[i]<='9' ){
            s1[i-start+1]=s[i];
            //printf("%c %d \n ",s[i],i);
        }
        else{
            s1[i-start+1]='\0';
            break;
        }


     }

  return s1;
}

int myAtoi(char* s) {
 char *s1=extract(s);
 int n=strlen(s1);
 if(n==0)
    return 0;

int sgn=(s1[0]=='+')?1:-1;

int r=0;
int p=0;

for (int i=1;i<n;i++){
    r=r*10+((int)s1[i]-(int)('0'));
}
free(s1);
 return r*sgn;
    
}
int main(){
    
    char  a[10]="23";
    char *s4=extract(a);
    printf("%s\n",s4);
    int n=myAtoi(a);
    printf("%d\n",n);
    free(s4);
    
    return 0;
}
