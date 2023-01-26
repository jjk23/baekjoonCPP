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
    int n[3],c;   
    while (1)
    {
        int max = 0;
        int temp = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> n[i];
            if (max < n[i])
            {
                max = n[i];
                c = i;//제일 긴 변의 인덱스
            }
        }
        if ((n[0] + n[1] + n[2]) == 0)
        {
            break;
        }
        for (int i = 0; i < 3; i++)
        {
            if (c != i)
            {
                temp += (n[i] * n[i]);
            }
        }
        if (temp == (n[c] * n[c]))
        {
            cout<<"right"<<'\n';
        }
        else
        {
            cout << "wrong" << '\n';
        }
    }
}