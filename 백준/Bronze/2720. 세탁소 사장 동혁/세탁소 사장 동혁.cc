#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>
#include<algorithm>

using namespace std;

int main() {
	int t;
	int money;	
	cin >> t;
	for (int i = 0;i < t;i++)
	{
		int q = 0, d = 0, n = 0, p = 0;
		cin >> money;
		while (money >= 25)
		{
			money -= 25;
			q++;
		}
		while (money >= 10)
		{
			money -= 10;
			d++;
		}
		while (money >= 5)
		{
			money -= 5;
			n++;
		}
		while (money >= 1)
		{
			money -= 1;
			p++;
		}
		cout << q << " " << d << " " << n << " " << p << endl;
	}	
}