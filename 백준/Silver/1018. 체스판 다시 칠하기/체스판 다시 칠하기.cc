#include <iostream>
#include <algorithm>
using namespace std;
int arr[51][51];
int cnt1 = 0;
int cnt2 = 0;
int mini = 100000;
int chess1[8][8] = {
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1}
};
int chess2[8][8] = {
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0}
};
int check(int i, int j)
{
    cnt1 = 0;
    cnt2 = 0;
    int a1=0, b1=0;
    for (int a = i; a < i + 8; a++)
    {
        for (int b = j; b < j + 8; b++)
        {
            if (arr[a][b] != chess1[a1][b1])
            {
                cnt1++;
            }
            if (arr[a][b] != chess2[a1][b1])
            {
                cnt2++;
            }
            b1++;
        }
        a1++;
        b1 = 0;
    }
    return min(cnt1, cnt2);
}
int main() {
    int n, m;
    cin >> n >> m; 
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c == 'B')
            {
                arr[i][j] = 0;//검은색이 0
            }
            else
            {
                arr[i][j] = 1;//흰색이 1
            }
        }
    }
   for (int i = 0; i <= n - 8; i++)
    {
        for (int j = 0; j <= m - 8; j++)
        {
            int k = check(i, j);
            if (mini > k)
            {
                mini = k;
            }
        }
    }
    cout << mini;
}