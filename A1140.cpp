//d直接参与计数，同时注意循环次数

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int d, n;
    cin >> d >> n;
    string s = to_string(d);
    for(int k = 0; k < n - 1; k++) {
        int len = s.size();
        string tmp = "";
        for(int i = 0; i < len; i++) {
            int cnt = 1;
            int j;
            for(j = i + 1; j < len; j++) {
                if(s[j] == s[i]) {
                    cnt++;
                }
                else break;
            }
            tmp += s[i] + to_string(cnt);
            i = j - 1;
        }
        s = tmp;
    }
    cout << s << endl;
    return 0;
}