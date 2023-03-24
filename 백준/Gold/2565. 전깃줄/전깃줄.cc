#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
vector<pair<int, int>> v;
int dp[501];
int mlen = 1;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int n;
    cin >> n;
    v.push_back({ 0,0 });//벡터도 제로베이스라서 1부터 시작하게 하기 위해
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        cin >> a>>b;
        v.push_back({ a, b });
    }
    sort(v.begin(), v.end());
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int max = 0;
        for (int j = 1; j < n; j++)
        {
            if (v[j].second<v[i].second && max < dp[j])
            {
                max = dp[j];
            }           
        }
        dp[i] = max + 1;
        if (dp[i] > mlen)
        {
            mlen = dp[i];
        }
    }
    cout << n-mlen;
}