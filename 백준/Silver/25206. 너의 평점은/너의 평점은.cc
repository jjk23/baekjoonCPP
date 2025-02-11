#include <iostream>
#include <string>

using namespace std;

int main() {
	float score,b,hap=0;
	string a,c;
	score = 0;
	for (int i = 0;i < 20;i++)
	{
		cin >> a >> b >> c;
		score += b;
		if (c == "A+")
		{
			hap += b * 4.5f;
		}
		else if (c == "A0")
		{
			hap += b * 4.0f;
		}
		else if (c == "B+")
		{
			hap += b * 3.5f;
		}
		else if (c == "B0")
		{
			hap += b * 3.0f;
		}
		else if (c == "C+")
		{
			hap += b * 2.5f;
		}
		else if (c == "C0")
		{
			hap += b * 2.0f;
		}
		else if (c == "D+")
		{
			hap += b * 1.5f;
		}
		else if (c == "D0")
		{
			hap += b * 1.0f;
		}
		else if (c == "F")
		{
			hap += b * 0.0f;
		}
		else if (c == "P")
		{
			score -= b;
		}
	}
	cout << hap / score;
	return 0;
}