#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
using namespace std;

int arr[41] = { 0 };
int c1 = 0,c2 = 0;
int fib(int n) {  
    if (n == 1 or n == 2)
    {
        c1 += 1;
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int n;
    cin >> n;
    fib(n);
    arr[1] = arr[2] = 1;
    for (int i = 3; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        c2++;
    }
    cout << c1 << ' ' << c2;
}