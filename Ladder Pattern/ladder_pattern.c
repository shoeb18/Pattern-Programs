#include <stdio.h>


void PrintLadder()
{
    int num;
    printf("How many ladder you want to print: ");
    scanf("%d",&num);

    int i=0;
    while (i<=num)
    {
        printf("*    *\n");
        printf("*    *\n");

        if(i<num)
        {
            printf("******\n");
        }
        i++;
    }

}


int main(){

    // Problem is if n = 2;
    // to hume ladder print karni hai
    // *    * 
    // *    *
    // ******
    // *    * 
    // *    *
    // ******
    // *    * 
    // *    *

    PrintLadder();
     

    
    return 0;
}