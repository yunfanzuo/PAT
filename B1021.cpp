#include <cstdio>
#include <iostream>
using namespace std;
int cnt[10];
int main()
{
    string s;
    cin >> s;
    int lens = s.size();
    for(int i = 0; i < lens; i++){
        cnt[int(s[i]-'0')]++;
    }
    for(int i = 0; i <10; i++){
        if(cnt[i] != 0){
            cout << i << ":" << cnt[i] << endl;
        }
    }
    return 0;
}