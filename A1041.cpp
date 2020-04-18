// 简单题

#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

const int maxn = 1e5 + 7;
int a[maxn];

int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    int flag = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if(m[a[i]] == 1) {
            flag = 1;
            ans = a[i];
            break;
        }
    }
    if(flag) cout << ans << endl;
    else cout << "None" << endl;
    return 0;
}