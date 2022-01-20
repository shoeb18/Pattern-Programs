#include <stdio.h>

void ElectricBill()
{
    double unit;
    printf("*   Electricity Bill Calculator   *\n");
    printf("*   Enter the value of total electricity units:\n");
    scanf("%lf",&unit);

    printf("*   You have to paid %.2lf rupees this month\n",(unit*7.0));
}

int main(){

    // this program calculates electricity bill 
    // ?note:  1 unit = 7 rupees

    ElectricBill();

    return 0;
}