#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
using namespace std;
char arr[1000];
map<string, int> m;

int main() {
    string s;
    cin >> s;

    string str = "";
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            str += s[j];
            m[str] = 1;
        }
        str = "";
    }

    cout << m.size();
}