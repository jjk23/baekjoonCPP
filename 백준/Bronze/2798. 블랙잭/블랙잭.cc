#include <iostream>
using namespace std;
int num[300000] = { 0, };
int main() {
    int n, m;
    int c=0;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int a = (num[i] + num[j] + num[k]);
                if (a <= m && a > c)
                {
                    c = a;
                }
            }
        }
    }
    cout << c;
}