#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>
#include<algorithm>

using namespace std;

int main() {
	int N, B; 
	cin >> N >> B;

	string result = "";

	while (N > 0)
	{
		int r = N % B;

		if (r < 10)
		{
			result += (char)(r + '0');
		}
		else
		{
			result += (char)(r - 10 + 'A');
		}

		N /= B; 
	}

	reverse(result.begin(), result.end()); 
	cout << result << endl;
	return 0;
}