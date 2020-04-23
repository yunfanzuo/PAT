//首先注意星期的范围，题目中表示应该为 A-G
//判断完第一个相同字母之后一定要continue不然下一个判断小时的部分会将当前字母认为是第二个相同字母
//小时的判断范围为 A-N

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string arr[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main()
{
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    int lena = a.size();
    int lenb = b.size();
    int lenc = c.size();
    int lend = d.size();
    int flag = 0;
    for(int i = 0; i < min(lena, lenb); i++){
        if(a[i] == b[i] && flag == 0 && a[i] >= 'A' && a[i] <= 'G'){
            cout << arr[int(a[i] - 'A')] << ' ';
            flag = 1;
            continue;
        }
        if(a[i] == b[i] && flag && ((a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i]))){
            if(isdigit(a[i])) cout << '0' << a[i] << ':';
            else cout << int(a[i] - 'A') + 10 << ':';
            break;
        }
    }
    for(int i = 0; i < min(lenc, lend); i++){
        if(c[i] == d[i] && isalpha(c[i])){
            if(i < 10){
                cout << '0' << i << endl;
            }
            else cout << i << endl;
        }
    }
    return 0;
}