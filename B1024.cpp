#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int lena = a.size();
    char f1 = a[0];
    char f2;
    string tt;
    int p1, p3;
    string p2;
    for(int i = 1; i < lena; i++){
        if(a[i] == '.'){
            p1 = stoi(tt);
            tt = "";
            continue;
        }
        else if(a[i] == 'E'){
            p2 = tt;
            tt = "";
            f2 = a[i+1];
            i++;
            continue;
        }
        tt = tt + a[i];
    }
    p3 = stoi(tt);
    if(f1 == '-'){
        cout << "-";
    }
    if(f2 == '-'){
        int tmp = p3 - 1;
        cout << "0.";
        while(tmp--) cout << "0";
        cout << p1 << p2 << endl;
    }
    else {
        cout << p1;
        int lenp2 = p2.size();
        if(lenp2 < p3){
            cout << p2;
            int tmp = p3 - lenp2;
            while(tmp--){
                cout << '0';
            }
            cout << endl;
        }
        else if(lenp2 == p3){
            cout << p2 << endl;
        }
        else {
            for(int i = 0; i < p3; i++){
                cout << p2[i];
            }
            cout << '.';
            for(int i = p3; i < lenp2; i++){
                cout << p2[i];
            }
            cout << endl;
        }
    }
    return 0;
}