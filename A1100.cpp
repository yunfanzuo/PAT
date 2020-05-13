//注意从字符串倒推数字的过程

#include <cstdio>
#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

string a[13] = {"#", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int main()
{
    int n;
    cin >> n;
    getchar();
    while(n--) {
        string tmp;
        getline(cin, tmp);
        if(isdigit(tmp[0])) {
            int num = stoi(tmp);
            int x = num / 13;
            int y = num % 13;
            if(x == 0 && y) cout << a[y] << endl;
            else if(x && y == 0) cout << b[x] << endl;
            else if(x && y) cout << b[x] << ' ' << a[y] << endl;
            else cout << "tret" << endl;
        }
        else {
            string s1 = tmp.substr(0, 3), s2;
            int len = tmp.size();
            if(len > 4) s2 = tmp.substr(4, 3);
            int m = 0, n = 0;
            for(int i = 0; i < 13; i++) {
                if(s1 == a[i] || s2 == a[i]) n = i;
                if(s1 == b[i]) m = i;
            }
            cout << m * 13 + n << endl;
        }
    }
    return 0;
}