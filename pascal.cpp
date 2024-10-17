#include <iostream>
#include <stdio.h>
void fill(char c , int sz){for (int i =0 ; i<sz ;i++){printf("%c",c);}}


int main(){
    int n=5;
    
    n=n+2;

    int a[n];
    for (int i=0; i<n; i++)
        a[i] = 0;

    a[0]=1;
    int ref=0;
    int key=1;
    int key1=0;
    for (int i=0; i<(n-2);i++){

        //for (int k=0 ; k<(n-2);k++){printf("%d",a[k]);}
       fill(' ',n-i-2);
       for (int k=0 ; k<i+1;k++){
        printf("%d ",a[k]);

       }
        key=1;
        for( int j =1; j<n ; j++){
            
                if (j>1){
                a[ref]=key1;
                }
                key1=key;
                key=a[j]+a[j-1];
                ref=j-1;



            
        }
        a[n-1]=key;
        printf("\n");

    }

}