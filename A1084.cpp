//两个字符串进行比较

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <cctype>
using namespace std;

map<char, int> m;
int main()
{
    string a, b;
    cin >> a >> b;
    int lena = a.size();
    int lenb = b.size();
    int i = 0, j = 0;
    while(i < lena) {
        if(a[i] == b[j]) {
            i++;
            j++;
        }
        else {
            char c = toupper(a[i]);
            if(m[c] == 0) {
                cout << c;
                m[c]++;
            }
            i++;
        }
    }
    cout << endl;
    return 0;
}