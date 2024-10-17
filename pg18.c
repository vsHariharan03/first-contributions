#include <stdio.h>
int main(){
int a=30;
int b=10;
int c=5;
int d=15;
printf("1 : %d\n",((a + b) * c / d));
printf("2 : %d\n",((a + b) * c) / d);
printf("3 : %d\n",a + (b * c) / d);
printf("4 : %d\n",(a + b) * (c / d));
}

