#include <iostream>
using namespace std;
int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    int res = a + b;
    string ans = "";
    do{
        int p = res / d;  //quotient
        int q = res % d;  //remainder
        ans = char(q + '0') + ans;
        res = p;
    }while(res);
    cout << ans << endl;
    return 0;
}

//when a+b=0