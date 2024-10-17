
#include <stdio.h>
#include <stdlib.h>

char* intToRoman(int num) {
    int n[4]={0};
    int p=num;
    for (int i=0;i<4;i++){
        n[i]=p%10;
        p=p/10;
    }
    int sym[7][2]={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    int j=0;
    int i;
    char *s = (char*)malloc(20);
    int c=0;
    while(num>0){
        printf("%d\n",num);
        //printf("%s\n",s);
    p=num;
    for (int i=0;i<4;i++){
        n[i]=p%10;
        p=p/10;
    }

        for(i=3;i>-1;i--){
            if(n[i]!=0)
            break;
        }

        if(n[i]!=4 && n[i]!=9){
            for(j=6;j>-1;j--){
                if (sym[j][1]<=num){
                    num=num-sym[j][1];
                    s[c]=sym[j][0];
                    c++;
                    break;
                }
            }
        }
        else{
            if(n[i]==4){

                if(i==0){
                    s[c]='I';
                    c++;
                    s[c]='V';
                    c++;
                    num-=4;
                }
                if(i==1){
                    s[c]='X';
                    c++;
                    s[c]='L';
                    c++;
                    num-=40;
                }
                if(i==2){
                    s[c]='C';
                    c++;
                    s[c]='D';
                    c++;
                    num-=400;
                }

            }
            else{
                if(i==0){
                    s[c]='I';
                    c++;
                    s[c]='X';
                    c++;
                    num-=9;
                }
                if(i==1){
                    s[c]='X';
                    c++;
                    s[c]='C';
                    c++;
                    num-=90;
                }
                if(i==2){
                    s[c]='C';
                    c++;
                    s[c]='M';
                    c++;
                    num-=900;
                }

            }
        }
    }
    s[c]='\0';
    return s;
}
int main(){

    char *s=intToRoman(1111);
    printf("%s\n",s);
    free(s);
    return 0;
}