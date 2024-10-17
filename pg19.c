#include <stdio.h>
int main(){
int y=0,m=0,d=0;
printf("Enter the number of days \n :");
scanf("%d",&d);
y=d/365;
m=(d%365)/30;
d=d-y*365-m*30;
printf ("days,months,years = %d,%d,%d",d,m,y);
return 0;
}
