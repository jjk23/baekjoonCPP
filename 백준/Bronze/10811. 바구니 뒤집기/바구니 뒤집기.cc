#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int a, b;
    cin >> n >> m;
    int arr[101];
    int arr2[101];
    int k;
    for (int i = 1;i <= n;i++)
    {
        arr[i] = i;
    }
    for (int i = 0;i < m;i++)
    {
        cin >> a >> b;
        for (int j = a;j <= b;j++)
        {
            arr2[j] = arr[j]; //복사작업
        }
        k = b;
        for (int j = a;j <= b;j++)
        {
            
            arr[j]=arr2[k];
            k--;
        }
    }
    for (int i = 1;i <= n;i++)
    {
        cout<<arr[i]<<" ";
    }
}