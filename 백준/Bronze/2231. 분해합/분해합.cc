#include <iostream>
using namespace std;
int main() {
    int min = 1000000;
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        int a = i;
        int k = a;
        while (a != 0)
        {
            k += (a % 10);
            a /= 10;
        }      
        if (k == n && min > i)
        {
            min = i;
        }
    }
    if (min == 1000000)
    {
        cout << 0;
    }
    else
    {
        cout << min;
    }
}