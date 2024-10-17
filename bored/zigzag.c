#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char* convert(char* s, int numRows) {
    int n=strlen(s);
    if (n==0 || numRows==1)
    return s;
    char* s1 =(char*) malloc(n+1);
    int n1=numRows+(numRows-2);
    //printf("%d %d %d\n",numRows+(numRows-2),(numRows-1),(n/n1+1)*(numRows-1));
    n1=(n/n1+1)*(numRows-1);
    
    int a[n1][numRows];

    for(int i=0;i<n1;i++){
    for(int j=0;j<numRows;j++){
        a[i][j]=0;
    }
    }

    int c=0;
    int i1=0;
    int i2=0;
    while(c<n){
        if(i2!=numRows){
            a[i1][i2]=s[c];
            c++;
            if (c>=n)
            break;
            i2++;
        }
        else{
            i1++;
            for(int i=0;i<numRows-2;i++){
                a[i1+i][numRows-2-i]=s[c];
                if (c>=n)
                break;
                c++;
            }
            i1+=numRows-2;
            i2=0;


        }

    }



    for(int i=0;i<n1;i++){
    for(int j=0;j<numRows;j++){
        printf("%c\t",a[i][j]);
    }
    printf("\n");
    }

    c=0;

    for(int i=0;i<numRows;i++){
    for(int j=0;j<n1;j++){
        printf("%c\t",a[j][i]);
        if (a[j][i]!=0 ){
        s1[c]=a[j][i];
        c++;
        }
    }
    printf("\n");
    }

  
    s1[c]='\0';


      return s1;  
    }

int main(){
    char* s="ABCDEF";
    printf("%s\n",s);
    char* s1=convert(s,5);
    printf("%s",s1);
    free(s1);
}
