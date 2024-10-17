#include<stdio.h>
int maxArea(int* a, int heightSize) {
    int n=heightSize;
    int max=0,val=0,val1=0,val2=n-1;
    while(val2>val1){
        
        val=(a[val2]>a[val1])?a[val1]:a[val2];
        printf("%d %d , %d %d | %d \n",val1,val2,a[val1],a[val2],val);
        val=val*(val2-val1);
        
        if (val>max){
            max=val;
        }
        if (a[val1+1]>a[val2-1]){
            val1+=1;
        }
        else{
            val2-=1;
        }

    }
    return max;
    
}

int main(){
    int a[9]={1,8,6,2,5,4,8,3,7};
    printf("%d\n",maxArea(a,9));
    return 0;
}