#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int min = (h-y);
    if (min >w-x )
    {
        min = w - x;
    }
    if (min > y)
    {
        min = y;
    }
    if (min > x)
    {
        min = x;
    }
    cout << min;
}