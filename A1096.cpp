//要求一串连续的数乘起来是n的因子

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fw = sqrt(n);
    int res = 0, now = 0;  //res记录连乘的个数，now记录连乘起点
    for(int i = 2; i <= fw; i++){
        int cnt = 0;
        int tmp = 1;
        if(n % i == 0) {
            tmp *= i;
            cnt++;
            for(int j = i + 1; ; j++) {
                tmp *= j;
                if(n % tmp != 0) break;
                cnt++;
            }
            if(cnt > res) {
                res = cnt;
                now = i;
            }
        }
    }
    if(res) {
        cout << res << endl;
        for(int i = now; i < now + res; i++){
            if(i == now) cout << i;
            else cout << "*" << i;
        }
        cout << endl;
    }
    else {
        cout << "1" << endl << n << endl;
    }
    return 0;
}