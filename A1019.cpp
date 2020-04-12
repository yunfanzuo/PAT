//简单的进制转换

#include <iostream>
using namespace std;

typedef long long LL;
LL rec[100];

int main()
{
    LL n, b;
    cin >> n >> b;
    int cnt = 0;
    while(n){
        rec[cnt++] = n % b;
        n /= b;
    }
    int flag = 1;
    for(int i = 0; i < cnt / 2; i++){
        if(rec[i] != rec[cnt - i - 1]){
            flag = 0;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    for(int i = cnt - 1; i > 0; i--){
        cout << rec[i] << ' ';
    }
    cout << rec[0] << endl;
    return 0;
}