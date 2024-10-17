#include <stdio.h>
int main(){
int d1=0, d2=0 , d3=0 ,d4=0 ;
float c;
printf("Enter the denominations of 20, 10 , 5 rupees and  50 paise \n :");
scanf("%d",&d1);
scanf("%d",&d2);
scanf("%d",&d3);
scanf("%d",&d4);
c =20*d1+10*d2+5*d3+d4/2.0;
printf ("%f ",c);



}
