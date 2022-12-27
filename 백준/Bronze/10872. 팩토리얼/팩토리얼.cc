#include <iostream>
using namespace std;

int pac(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * pac(a - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "1";
    }
    else
    {
        cout << pac(n);
    }
    return 0;
}