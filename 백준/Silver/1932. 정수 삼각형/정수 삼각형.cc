#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int n,m=0;
    int arr[500];
    int temp[500];
    cin >> n;
    cin >> arr[0];
    m = arr[0];
    for (int i = 1; i < n; i++)
    {
        m = 0;
        for (int j = 0; j < i+1; j++)
        {
            cin >> temp[j];
            if (j == 0)
            {
                temp[j] = temp[0] + arr[0];
            }
            else if (j == i)
            {
                temp[j] = temp[j] + arr[i-1];
            }
            else
            {
                temp[j] = max(arr[j - 1], arr[j]) + temp[j];
            }
            if (m < temp[j])
            {
                m = temp[j];
            }
        }
        for (int j = 0; j < i + 1; j++)
        {
            arr[j] = temp[j];
        }
    }
    cout << m;
}