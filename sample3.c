#include<stdio.h>

int main(){

int n1=5,n2=5;
int a[]={1,2,3,4,5};
int b[]={4,5,6,7,8};
int c1=0,c2=0;
printf("\nunion : ");
for (int i=0;i<n1;i++){

    printf("%d\t",a[i]);
}
for (int i=0;i<n2;i++){
    c1=0;
    for (int j=0;j<n1;j++){

        if (a[j]==b[i]){
            c1=1;
            break;
        }
    }
    if (c1==0){
        printf("%d\t",b[i]);
    }
}

printf("\nIntersection : ");
for (int i=0;i<n1;i++){
    c1=0;
    for (int j=0;j<n2;j++){

        if (a[i]==b[j]){
            c1=1;
            break;
        }
    }
    if (c1==1){
        printf("%d\t",a[i]);
    }
}



}
