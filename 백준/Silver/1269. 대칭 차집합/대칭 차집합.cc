#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
using namespace std;
int n, m,cnt=0;
map<int, int> a;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        if (a.count(temp) == 1)
        {
            cnt += 2;
        }
    }
    cout << n + m - cnt;
}