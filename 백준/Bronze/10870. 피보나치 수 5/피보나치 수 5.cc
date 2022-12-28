#include <iostream>
using namespace std;

int pibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return pibo(n - 2) + pibo(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << pibo(n);
    return 0;
}