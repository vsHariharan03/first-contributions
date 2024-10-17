#include<stdio.h>
int main()
{
    int i,j,size,x,k;
    float det=1.0;
    printf("Enter the size of the number");
    size=3;
double arr[3][3]={
    {3,5,7},
    {9,5,7},
    {9,5,2}
};
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i][j]==0)
                continue;
            else
            { int k = False ;
                float number = arr[i][j]/arr[j][j];
                for(k=0;k<size;k++)
                {
                    if(i>0)
                    {
                        arr[i][k]-=number*arr[j][k];
                    }
                }
            }
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%f ",arr[i][j]);
        }
    det*=arr[i][i];
    printf("\n");
    }
printf("The determinant of matrix is %f",det);
}