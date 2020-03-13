#include <cstdio>
#include <map>
#include <iostream>
using namespace std;

int q[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
map<int, char> m;

int main()
{
    m[0] = '1';
    m[1] = '0';
    m[2] = 'X';
    m[3] = '9';
    m[4] = '8';
    m[5] = '7';
    m[6] = '6';
    m[7] = '5';
    m[8] = '4';
    m[9] = '3';
    m[10] = '2';
    int N;
    string s;
    int flag = 1;
    cin >> N;
    while(N--){
        cin >> s;
        int lens = s.size();
        int tmp = 0;
        for(int i = 0; i < 17; i++){
            tmp += (s[i] - '0') * q[i];
        }
        tmp %= 11;
        if(s[17] != m[tmp]){
            flag = 0;
            cout << s << endl;
        }
    }
    if(flag) cout << "All passed" << endl;
    return 0;
}