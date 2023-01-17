#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
using namespace std;
int n, m,cnt=0;
map<string, int> name;
string arr[500000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        name[temp] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        string temp;
        cin >> temp;
        if (name.count(temp) == 1)
        {
            arr[cnt] = temp;
            cnt += 1;
        }
    }
    cout << cnt << '\n';
    sort(arr, arr + cnt);
    for (int i = 0; i < cnt; i++)
    {
        cout << arr[i] << '\n';
    }
}