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
    int n,arr[100],cnt=1,max=0,min=1000000000;
    cin >> n;
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        for (int j = 0; j < cnt; j++)
        {
            int k;
            if (arr[cnt] > arr[j])
            {
                k = arr[cnt] - arr[j];
            }
            else
            {
                k = arr[j] - arr[cnt];
            }
            if (k > max)
            {
                max = k;
            }
            if (k < min)
            {
                min = k;
            }           
        }
        cnt += 1;
    }
    int a, b,t;
    a = max, b = min;
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
    for (int i = 2; i <= b/2; i++)
    {
        if (b % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << b;
}