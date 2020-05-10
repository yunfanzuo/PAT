//大数相加，<algorithm>里的reverse函数

#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

bool jug(string s) {
    int lens = s.size();
    int flag = 1;
    for(int i = 0; i < lens / 2; i++) {
        if(s[i] != s[lens - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag) return true;
    else return false;
}

string add(string s1, string s2) {  //s1更长
    if(s1.length() < s2.length()) {
        string temp = s1;
        s1 = s2;
        s2 = temp;
    }
    for(int i = s1.length() - 1, j = s2.length() - 1; i >= 0; i--, j--) {
        s1[i] += j >= 0 ? s2[j] - '0' : 0;
        if(s1[i] - '0' >= 10) {  //进位
            s1[i] = (s1[i] - '0') % 10 + '0';
            if(i) s1[i - 1]++;  //是否需要补位
            else s1 = '1' + s1;
        }
    }
    return s1;
}

int main()
{
    string s;
    cin >> s;
    int cnt = 10;
    int flag = 0;
    while(cnt--) {
        if(jug(s)) {
            flag = 1;
            break;
        }
        string a = s;
        reverse(s.begin(), s.end());
        string b = s;
        string tmp = add(a, b);
        cout << a << " + " << b << " = " << tmp << endl;
        s = tmp;
    }
    if(flag) cout << s << " is a palindromic number." << endl;
    else cout << "Not found in 10 iterations." << endl;
    return 0;
}