#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
using namespace std;
int n, m,cnt=1;
string temp;
map<int, string> pname;
map<string, int> pnum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {        
        cin >> temp;
        pname[i + 1] = temp;
        pnum[temp] = i + 1;
    }
    for (int i = 0; i < m; i++)
    {       
        cin >> temp;
        if (temp[0] >= 'A')
        {
            cout << pnum[temp] << '\n';
        }
        else
        {
            cout << pname[stoi(temp)] << '\n';
        }
    }
}