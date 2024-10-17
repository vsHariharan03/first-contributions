#include<stdio.h>
int z=0;
void f(int a[]){
a[0]=100;

}
int main(){
int a =5;
int *p =&a;
*p+=1;
printf("%d\n",a);
}