//(N + 2) % 3 = rmd
//k2 = k1 + rmd + 1
//2 * k1 + k2 = N
//我这里的k1表示的是竖直部分不算最后一行的长度

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int N = s.size();
    int k1 = (N - (N + 2) % 3 + 2) / 3 - 1;
    int k2 = N - 2 * k1;
    for(int i = 0; i < k1; i++){
        cout << s[i];
        for(int j = 0; j < k2 - 2; j++){
            cout << ' ';
        }
        cout << s[N - i - 1] << endl;
    }
    for(int i = N - k1 - k2; i < N - k1; i++){
        cout << s[i];
    }
    cout << endl;
    return 0;
}