#include <iostream>
using namespace std;

// if n=3;
//   1
//  212
// 32123

void Pattern()
{
    int n;
    cout << "Enter the value of rows" << endl;
    cin >> n;

    for (int s = 1; s <= n; s++)
    {
        int v = 1;
        while (v <= (n - s))
        {
            cout << " ";
            v++;
        }
        for (int a = s; a >= 1; a--)
        {
            cout << a;
        }
        int g = 2;
        while (g <= s)
        {
            cout << g;
            g++;
        }
        cout << endl;
    }
}

int main()
{

    Pattern();

    return 0;
}
