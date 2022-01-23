#include <stdio.h>

// solve pattern problem
// if n = 3;
//   *
//  ***
// *****


void PyramidPattern()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*n-1); j++)
        {
            if((j>=n-1-i) && (j<=n-1+i))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}


int main(){

    PyramidPattern();   

    
    return 0;
}