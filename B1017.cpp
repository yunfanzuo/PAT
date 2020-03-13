#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int b;
    cin >> a >> b;
    int lena = a.size();
    int r = 0;
    int bc = 0;
    string q;
    if (lena == 1 && stoi(a) < b)
    {
        cout << "0 " << stoi(a) << endl;
    }
    else
    {
        for (int i = 0; i < lena; i++)
        {
            bc = bc * 10 + int(a[i] - '0');
            if (bc < b)
            {
                q = q + '0';
                r = bc;
            }
            else
            {
                q += char(bc / b + '0');
                bc = bc % b;
                r = bc;
            }
        }
        int lenq = q.size();
        int flag = 1;
        for (int i = 0; i < lenq; i++)
        {
            if (q[i] == '0' && i < lenq - 1 && flag)
            {
                continue;
            }
            else
            {
                flag = 0;
                cout << q[i];
            }
        }
        cout << ' ' << r << endl;
    }
    return 0;
}