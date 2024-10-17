#include <stdio.h>
int main(){
float f=0, c=0 ;
printf("Enter the temprature in Fahrenheit\n :");
scanf("%f",&f);
c = (5.0/9.0*(f-32.0)) ;
printf ("%f in Fahrenheit = %f Centigrade \n",f,c);
return 0;
}
