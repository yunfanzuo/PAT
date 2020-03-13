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
        if(a[i] == b[i] && isalpha(a[i]) && flag){
            if(isupper(a[i])){
                cout << DAY[int(a[i] - 'A')] << ' ';
            }
            else cout << DAY[int(a[i] - 'a')] << ' ';
            flag = 0;
            continue;
        }
        if(flag == 0 && a[i] == b[i]){
            if(isupper(a[i])) cout << int(a[i] - 'A') + 10 << ':';
            else if(isdigit(a[i])) cout << '0' << a[i] << ':';
            else cout << int(a[i] - 'a') + 10 << ':';
            break;
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