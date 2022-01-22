// make a program to print following pattern
// respective of user input value
// if input = 3;
//     *
//     *
// *****
// *
// *
// *****
//     *
//     *
// *****

#include <iostream>
using namespace std;

void Pattern()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    if (n==0)
    printf("Please input natural number value!\n");
    return;

    for (int i = 0; i < n; i++)
    {
            if ((i%2) == 0)
            {
                printf("    *\n");
                printf("    *\n");
                printf("*****\n");
            }
            else{
                printf("*\n");
                printf("*\n");
                printf("*****\n");
            }
    }
    
}

int main(){

    Pattern();

    
    return 0;
}