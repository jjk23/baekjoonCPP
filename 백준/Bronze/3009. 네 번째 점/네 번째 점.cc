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
    int x[3], y[3],rx=0,ry=0;
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    cin >> x[2] >> y[2];
    if (x[0] == x[1])
    {
        rx = x[2];
    }
    else if (x[0] == x[2])
    {
        rx = x[1];
    }
    else
    {
        rx = x[0];
    }
    if (y[0] == y[1])
    {
        ry = y[2];
    }
    else if (y[0] == y[2])
    {
        ry = y[1];
    }
    else
    {
        ry = y[0];
    }
    cout << rx << " " << ry;
}