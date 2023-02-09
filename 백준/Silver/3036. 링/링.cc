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
    int n, arr[100];
    cin >> n;
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        int a=arr[0], b=arr[i], t;
        if (a < b)
        {
            t = a;
            a = b;
            b = t;
        }
        t = a % b;
        while (t != 0)
        {
            a = b;
            b = t;
            t = a % b;
        }
        cout << arr[0] / b << "/" << arr[i] / b << '\n';
    }
    
}