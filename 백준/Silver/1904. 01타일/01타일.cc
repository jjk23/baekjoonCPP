#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
using namespace std;

long long arr[1000000] = { 0, };
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    arr[1] = 1;
    arr[2] = 2;
    int n;
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
    }
    cout << arr[n];
}