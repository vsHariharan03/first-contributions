#include<string.h>
#include<stdio.h>
#include <stdlib.h>

int check(char* s , int n1 , int n2){
    
    for (int i =0;i<(n2-n1);i++){
        if(s[n1+i]!=s[n2-i]){
            return 0;
        }  }
    return 1;
}

char* longestPalindrome(char* s) {
    int n=strlen(s);
    
    char sub[n] ;
    int n1=0;
    int n2=0;

    int val=0;
    for(int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            if((i+j)>=n){continue;}
            //printf("%d %d %d \n",j,j+i,check(s,j,j+i));
            if (check(s,j,i+j)==1){
                if (val<(i)){
                    n1=j;
                    n2=i+j;
                    val=i;
                }
            }
        }
    }

//printf("%d %d %d-",n1, n2,val);

for(int i=0;i<=val;i++){
    sub[i]=s[n1+i];
    }
    sub[n1+val+1]='\0';


//strncpy(sub, s+ n1, n1+val+1);sub[n1+val+1] = '\0';
char *p = (char*)malloc(val);
p=strtok(sub, "");

return p;
}

int main(){
    char s[5]="a";
    char* s1=longestPalindrome(s);
    puts(s1);
    printf("%s --",s1);
    //printf("%d\n",check("kHd",1,1));
    //printf("%d--\n",strlen("HHH"));
    return 0;
}