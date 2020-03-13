//注意题目对于“相同”情况的描述

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
string DAY[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    int lena = a.size();
    int lenb = b.size();
    int lenc = c.size();
    int lend = d.size();
    int flag = 1;
    for(int i = 0; i < min(lena, lenb); i++){
        if(a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G' && flag){
            cout << DAY[int(a[i] - 'A')] << ' ';
            flag = 0;
            continue;
        }
        if(flag == 0 && a[i] == b[i]){
            if(a[i] >= 'A' && a[i] <= 'N') {
                cout << int(a[i] - 'A') + 10 << ':';
                break;
            }
            else if(isdigit(a[i])) {
                cout << '0' << a[i] << ':';
                break;
            }
        }
    }
    for(int i = 0; i < min(lenc, lend); i++){
        if(c[i] == d[i] && isalpha(c[i])){
            if(i < 10){
                cout << '0' << i << endl;
            }
            else cout << i << endl;
            break;
        }
    }
    return 0;
}