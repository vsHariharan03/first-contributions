#include <stdio.h>

int main(){

int n=3;
double a[3][3]={
    {2,7,6},
    {9,5,1},
    {1,3,8}
};
int flag=0;
int c1=0,c2=0,c3=0,c4=0;

int c=0;
for(int i=0;i<n;i++){
    c1+=a[i][i];
    c2+=a[i][n-i-1];
    for(int j=0;j<n;j++){
        c3+=a[i][j];
        c4+=a[j][i];
    }
    if(c3!=c4){flag=1;}
    c=c3;
    c3=0;
    c4=0;

}
if(c!=c2 || c!=c1 || c1!=c2  ){flag=1;}

if (flag==0){
    printf("yeah");
}
else{
  printf("nah");  
}
    return 0;
}