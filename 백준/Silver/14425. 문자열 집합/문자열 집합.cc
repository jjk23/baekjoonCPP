#include <iostream>
#include <algorithm>
#include<map>
using namespace std;
int n, k, cnt = 0;
string str;
int main() {
    cin >> n >> k;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        m[str] = i;
    }
    for (int j = 0; j < k; j++)
    {
        cin >> str;
        if (m.count(str) > 0)
        {
            cnt++;
        }
    }
    cout << cnt;
}