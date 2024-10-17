#include <iostream>
using namespace std;

int func1(float n1,float n2){
    float m1=n1*n1 ,  m2=n2*n2;
    float x=n1 , y=n2;
    int c1=0;
    for (int i1 =0; i1<200 ; i1++){
        
        n2=2.0*n1*n2+y;
        n1=(m1)-(m2)+x;

        m1=n1*n1;
        m2=n2*n2;
        if (((m1)+(m2))>4.0){
            break;
        }
        c1++;

    
    }
    return c1;


}

int main(){
    int c=0;
    double sc=2;
    for( float i=-10.0*sc ; i<10*sc ;i++){
        for (float j=-30.0*sc ; j<20*sc ; j++){
            c=func1(j/(10.0*sc),i/(10.0*sc));
            if (c>190){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
}