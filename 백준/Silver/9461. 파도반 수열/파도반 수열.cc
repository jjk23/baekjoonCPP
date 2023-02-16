#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
using namespace std;
long long arr[100] = { 0, };

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i < 100; i++)
    {
        arr[i] = arr[i - 3] + arr[i - 2];
    }
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << arr[n-1]<<'\n';
    }
}