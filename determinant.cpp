#include <stdio.h> 

int main(){
int n=3;
double a[3][3]={
    {3,5,7},
    {9,5,7},
    {9,5,2}
};


double c=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
            c=a[j][i]/a[i][i];
            for(int k=0;k<n;k++){
                a[j][k]-=c*a[i][k];
            }
    }
}

double det =1;
for(int i=0;i<n;i++){
    det*=a[i][i];
    for(int j=0;j<n;j++){
        //printf("%f ",a[i][j]);
    }
    printf("\n");
}

printf("%f ",det);
}