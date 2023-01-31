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
    float t, x1, y1, r1, x2, y2, r2;
    float cond1, cond2;
    int arr[100000];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        cond1 = (r1 - r2) * (r1 - r2);
        cond2 = (r1 + r2) * (r1 + r2);
        if (x1 == x2 && y1 == y2 && r1 == r2)
        {
            if (cond1 == 0)
            {
                arr[i] = -1;
            }
            else
            {
                arr[i] =0;
            }          
        }
        else
        {
            float l = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
            if (l==cond1||l==cond2)
            {
                arr[i] = 1;
            }
            else if(cond1<l&&l<cond2)
            {
                arr[i] = 2;
            }
            else
            {
                arr[i] = 0;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << '\n';
    }
}