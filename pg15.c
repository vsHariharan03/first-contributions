#include<stdio.h>
#include<math.h>
int main(){


float p=0,n=0,r=0;
printf("Input p,n,r : \n");
scanf("%f%f%f",&p,&n,&r);

printf("SI %f\n",p*n*r/100);

float c=p*pow(((1+r/100)),n)-p;
printf("CI %f\n",c);



}
