#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string a, b;
    int da, db;
    cin >> a >> da >> b >> db;
    int lena = a.size(), lenb = b.size();
    int cnta = 0, cntb = 0;
    for(int i = 0; i < lena; i++){
        if(int(a[i] - '0') == da){
            cnta++;
        }
    }
    for(int i = 0; i < lenb; i++){
        if(int(b[i] - '0') == db){
            cntb++;
        }
    }
    long long resa = 0, resb = 0;
    while(cnta--){
        resa = resa * 10 + da;
    }
    while(cntb--){
        resb = resb * 10 + db;
    }
    cout << resa + resb << endl;
    return 0;
}