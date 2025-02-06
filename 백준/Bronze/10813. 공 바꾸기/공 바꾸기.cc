#include <iostream>
using namespace std;

int main()
{
    int arr[101];
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        int j = arr[a];
        arr[a] = arr[b];
        arr[b] = j;
    }
    for (int i = 1;i <= n;i++)
    {
        cout << arr[i] << " ";
    }
}