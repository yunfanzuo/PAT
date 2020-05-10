//注意假如转换成int进行计算时可能会爆int

#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n;
    string z;
    cin >> n;
    while(n--) {
        cin >> z;
        int lenz = z.size();
        string a = z.substr(0, lenz / 2);
        string b = z.substr(lenz / 2, lenz / 2);
        double aa = stod(a), bb = stod(b), zz = stod(z);
        double tmp = zz / aa / bb;
        if(tmp == (int)tmp) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}