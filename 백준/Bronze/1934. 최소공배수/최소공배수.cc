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
    int k;
    int a, b,t;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        int n1 = a, n2 = b;
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
        cout << (n1 * n2) / b<<'\n';
    }  
}