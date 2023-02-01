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
    int t, x1, y1, x2, y2,n,l1,l2;
    int cx, cy, r,cnt=0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> cx >> cy >> r;
            l1 = sqrt((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy));
            l2 = sqrt((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy));
            if (l1 < r&&l2<r)
            {
                
            }
            else if(l1<r||l2<r)
            {
                cnt += 1;
            }
        }
        cout << cnt<<'\n';
        cnt = 0;
    }   
}