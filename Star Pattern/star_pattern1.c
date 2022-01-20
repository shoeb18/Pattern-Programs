#include <stdio.h>

// make a program to print following star pattern 
// 1st function with the help of iteration
// 2nd function with the help of recursion
// if n = 4;
// *
// **
// ***
// ****

void StarPattern_Iterative(int n)
{
    for(int i=0;i<n;i++){
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


void StarPattern_Recursive(int n)
{
    if(n==1){
        printf("*");
    }
    StarPattern_Recursive(n+1);
}

int main(){

    StarPattern_Iterative(4);
    StarPattern_Recursive(4);

    return 0;
}