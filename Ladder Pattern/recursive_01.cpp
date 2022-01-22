#include <iostream>
using namespace std;


int fun(int a, int b) {
    if(a > b && a > 0)
        return a + b + fun(b-1,a-1);
    else
        return a+b;
}

int main(){

    int a = 8, b = 1;
    cout << fun(a,b);
    return 0;
}