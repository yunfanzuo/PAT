//A+B不可以直接计算

#include <cstdio>
#include <iostream>
using namespace std;

typedef long long LL;

int main()
{
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        LL a, b, c;
        cin >> a >> b >> c;
        if(c - a < b) {
            cout << "Case #" << i << ": " << "true" << endl;
        }
        else cout << "Case #" << i << ": " << "false" << endl;
    }
    return 0;
}