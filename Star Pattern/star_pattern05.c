#include<stdio.h>
// make a function to print following star pattern
// use function to implement
// if n = 4;
// ****
//  ***
//   **
//    *



void PatternLogic1()
{
    int n;
    printf("How many lines you have\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

// void PatternLogic2()
// {
//     int n;
//     printf("How many lines you have\n");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j + i >= (n - 1))
//             {
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

int main()
{

    // call function in main
    // ? remember execution is starts from main function
    PatternLogic1();
    //    PatternLogic2();

    return 0;
}