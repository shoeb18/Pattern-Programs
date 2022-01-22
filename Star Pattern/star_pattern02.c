#include <stdio.h>

int main(){


    
    // make a program to print the follwing star pattern 
    // if n = 4
    // *
    // **
    // ***
    // ****

    int n;
    printf("Enter the value of rows\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}