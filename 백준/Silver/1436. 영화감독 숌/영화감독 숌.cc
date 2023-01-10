#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int cnt = 1;
    cin >> n;
    int num = 666;
    while (1)
    {
        if (n == cnt)
        {
            break;
        }
        num += 1;
        int a = 0;
        int b = num;
        while (b != 0)
        {
            if (b % 10 == 6)
            {
                a += 1;
            }
            else
            {
                a = 0;
            }
            b /= 10;
            if (a == 3)
            {
                cnt += 1;
                break;
            }
        }                        
    }
    cout << num;
}