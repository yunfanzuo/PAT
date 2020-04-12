//进制转换，十进制转十三进制

#include <iostream>
using namespace std;

void op(int x) {
    if(x == 10) cout << 'A';
    else if (x == 11) cout << 'B';
    else if (x == 12) cout << 'C';
    else cout << x;
}

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    cout << '#';
    int s[2];
    for(int i = 0; i < 3; i++) {
        s[1] = a[i] % 13;
        a[i] /= 13;
        if(a[i] == 0) {
            s[0] = 0;
        }
        else {
            s[0] = a[i] % 13;
        }
        op(s[0]);
        op(s[1]);
    }
    cout << endl;
    return 0;
}