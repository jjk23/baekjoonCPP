#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>
#include<algorithm>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int n = 0;
	bool end = false;
	for (int i = 1;i <= a;i++){
		if (a % i == 0) {
			n++;
			if (n == b) {
				cout << i;
				end = true;
				break;
			}
		}
	}
	if (!end)
	{
		cout << 0;
	}
}