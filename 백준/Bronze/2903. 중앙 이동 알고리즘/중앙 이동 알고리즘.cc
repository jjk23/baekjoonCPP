#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>
#include<algorithm>

using namespace std;

int main() {
	int n;
	int a = 2;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		a = a * 2 - 1;
	}
	cout << a * a;
}