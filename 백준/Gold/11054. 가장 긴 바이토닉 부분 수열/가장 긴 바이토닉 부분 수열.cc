#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int arr[1001];
int dp1[1001];//증가하는
int dp2[1001];//감소하는
int mlen=0;//답

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int max=0;//dp값이 최대인지 확인할때 사용
        cin >> arr[i];
        for (int j = 1; j < i; j++)
        {
            if (arr[i] > arr[j] && max < dp1[j])
            {
                max = dp1[j];
            }           
        }
        if (max == 0)
        {
            dp1[i] = 1;
        }
        else
        {
            dp1[i] = max + 1;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        int max = 0;//dp값이 최대인지 확인할때 사용
        for (int j = n; j > i; j--)
        {
            if (arr[i] > arr[j] && max < dp2[j])
            {
                max = dp2[j];
            }
        }
        if (max == 0)
        {
            dp2[i] = 1;
        }
        else
        {
            dp2[i] = max + 1;
        }
        if (dp1[i] + dp2[i] - 1 > mlen)
        {
            mlen = dp1[i] + dp2[i] - 1;
        }
    }
    cout << mlen;
}