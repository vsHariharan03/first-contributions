
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char* extract(char * s){
    int n=strlen(s);
    char* s1=(char*)malloc(n);
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            continue;
        }
        else if (s[i]=='-'){
            for (int j=i;j<n;i++){

                if( !('0'<s[j] && s[j]<'9' )){
                    if (s[j]=='-'){
                        continue;
                    }
                    else{
                        s1[j]='\0';
                        break;
                    }
                }
                s1[j-i]=s[j];
            }
        }
        else if (s[i]=='+'){
            for (int j=i;j<n;i++){

                if( !('0'<s[j] && s[j]<'9' )){
                    if (s[j]=='+'){
                        continue;
                    }
                    else{
                        s1[j]='\0';
                        break;
                    }
                }
                s1[j-i]=s[j];
            }
        }

    }

    return s1;
    
}

int myAtoi(char* s) {
 return 0;
    
}
int main(){
    char  a[10]="-23";
    char *s=extract(a);
    printf("--%s\n",s);
    free(s);
    return 0;
}