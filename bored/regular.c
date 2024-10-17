
#include <stdio.h>
#include <string.h>

int strcheck(char* s, char* p,int n1,int n2){
    int n=strlen(s);
    int nn=strlen(p);
    int flg=0;
    for (int i=0;i<n-nn;i++){
        flg=0;
        for(int j=n1;j<n2;j++){
            //printf("%c %c\n",s[i+j],p[j]);
            if(s[i+j-n1]==p[j])
                continue;
            if(p[j]=='_')
            continue;
            flg=1;
            //printf("%c-%c\n",s[i+j],p[j]);
            break;
        }
        if (flg==0)
         return i;
         //printf("%d-%d----------\n",i,flg);
    }
    return -1;
}
int isMatch(char* s, char* p) {
    int arr[15]={0};
    int n=strlen(s);
    int n1=strlen(p);

    int c=0;
    for (int i=0;i<n1;i++){
        if(p[i]=='*'){
        arr[c]=i;
        c++;
        }
    }


    arr[c]=n1;
    for(int i=0;i<c;i++){
        for(int j=arr[i];j<arr[i+1];j++){
            printf("%c",s[j]);
        }
        printf("\n");
        
        if(strcheck(s,p,arr[i],arr[i+1])==-1)
        return 0;
    }

    return 1;

    
}

int main(){
  char s[]="Hello there";
  char p[]="*ell*";
  printf("%d ",isMatch(s,p));
}