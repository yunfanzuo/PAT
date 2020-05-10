//直接疯狂螺旋香蕉棒棒糖暴力跑就可以了

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int l, k, tmp, sq, flag;
    string s;
    cin >> l >> k >> s;
    int i;
    for(i = 0; i <= l - k; i++) {  //注意这里i <= l - k
        tmp = stoi(s.substr(i, k));
        sq = sqrt(tmp);
        flag = 1;
        for(int j = 2; j <= sq; j++) {
            if(tmp % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) cout << s.substr(i, k) << endl;
    else cout << "404" << endl;
    return 0;
}