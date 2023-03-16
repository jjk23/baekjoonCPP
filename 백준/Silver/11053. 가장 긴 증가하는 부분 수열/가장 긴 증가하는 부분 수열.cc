#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int arr[1001];
int dp[1001] = {1,};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int n,mlen=1;
    cin >> n;
    cin >> arr[1];
    dp[1] = 1;//첫번째 값의 최대길이는 1
    for (int i = 2; i <= n; i++)
    {
        cin >> arr[i];
        int max = 0;
        for (int j = 1; j < i; j++)
        {
            if (arr[j] < arr[i]&&max<dp[j])
            {
                max = dp[j];
                dp[i] = max + 1;
            }
        }
        if (dp[i] == 0)
        {
            dp[i] = 1;
        }
        if (mlen <= dp[i])
        {
            mlen = dp[i];
        }
    }
    cout << mlen;
}