#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
using namespace std;
int n, m;
map<int, int> card;
int arr[500000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        card[a] += 1;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        arr[i]= card[a];
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
}