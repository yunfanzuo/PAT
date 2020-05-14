//大数相乘

#include <iostream>
using namespace std;

int x[10], y[10];

string mul(string a){
    int lena = a.size();
    int cnt = 0;
    for(int i = lena - 1; i >= 0; i--) {
        int res = (a[i] - '0') * 2 + cnt;
        if(res >= 10) {
            a[i] = res % 10 + '0';
            cnt = res / 10;
        }
        else {
            a[i] = res + '0';
            cnt = 0;
        }
        if(i == 0 && cnt) {
            a = char(cnt + '0') + a;
        }
    }
    return a;
}

int main()
{
    string s;
    cin >> s;
    string ans = mul(s);
    int len = ans.size();
    for(int i = 0; i < len; i++) {
        x[int(ans[i] - '0')]++;
    }
    int lens = s.size();
    for(int i = 0; i < lens; i++) {
        y[int(s[i] - '0')]++;
    }
    int flag = 1;
    for(int i = 0; i < 10; i++) {
        if(x[i] != y[i]) {
            flag = 0;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    cout << ans << endl;
    return 0;
}