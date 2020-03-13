#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 1e5+7;
int s[maxn];

int main()
{
    int N, g;
    memset(s, 0, sizeof s);
    cin >> N;
    while(N--){
        int tmp;
        cin >> tmp >> g;
        s[tmp] += g;
    }
    int a = 0, b = 0;
    for(int i = 0; i < maxn; i++){
        if(s[i] > b){
            a = i;
            b = s[i];
        }
    }
    cout << a << ' ' << b << endl;
    return 0;
}