#include <iostream>
#include <string>

using namespace std;

int main() {
	string arr;
	cin >> arr;
	int a=1;
	int len=arr.length();
	for (int i = 0;i < len;i++)
	{
		if (!(arr[i] == arr[len - i - 1]))
		{
			a=0;
			break;
		}
	}
	cout << a;
	return 0;
}