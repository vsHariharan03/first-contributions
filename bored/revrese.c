#include<stdio.h>
int reverse(int x){
    int sgn=0;
    if(x<0){
        sgn=-1;
        x=-x;
    }
    else if(x>0){
        sgn=1;
    }
    
    int d=0,p=x,r=0;
    while(p>0){
        d=p%10;
        
        r=r*10+d;
        p=p/10;
    }
    
    return sgn*r;


}
int main(){
    int a=2147483412;
    printf("%d\n",reverse(a));
    return 0;
}