//简单无脑，直接按题目描述即可

#include <cstdio>
#include <iostream>
using namespace std;

const int maxn = 1005;
struct {
    string t;
    string m;
    bool modi;
} a[maxn];

string check(string s) {
    int lens = s.size();
    for(int i = 0; i < lens; i++) {
        if(s[i] == '1') s[i] = '@';
        else if(s[i] == '0') s[i] = '%';
        else if(s[i] == 'l') s[i] = 'L';
        else if(s[i] == 'O') s[i] = 'o';
    }
    return s;
}

int main()
{
    int N;
    cin >> N;
    int cnt = 0;
    for(int i = 0; i < N; i++) {
        cin >> a[i].t >> a[i].m;
        string tmp = check(a[i].m);
        if(a[i].m == tmp) {
            a[i].modi = false;
        }
        else {
            a[i].m = tmp;
            a[i].modi = true;
            cnt++;
        }
    }
    if(cnt == 0 && N == 1) {
        cout << "There is 1 account and no account is modified" << endl;
    }
    else if(cnt == 0 && N != 1) {
        cout << "There are " << N << " accounts and no account is modified" << endl;
    }
    else {
        cout << cnt << endl;
        for(int i = 0; i < N; i++) {
            if(a[i].modi) {
                cout << a[i].t << ' ' << a[i].m << endl;
            }
        }
    }
    return 0;
}