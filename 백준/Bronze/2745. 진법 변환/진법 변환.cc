#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>

using namespace std;

int main() 
{
	char n[100];
	cin >> n;
	int b,hap=0;
	cin  >> b;
	int c = strlen(n);
	for (int i = 0;i < c;i++)
	{
		if ((int)n[i] > 57)
		{
			hap += ((int)n[i] - 55) * pow(b, c - i - 1);
		}
		else
		{
			hap += ((int)n[i]-48) * pow(b, c - i - 1);
		}	
	}
	cout << hap;
	return 0;
}