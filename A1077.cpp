//将左右字符串翻转过来后暴力匹配即可

#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string s[107];
    int mj = 500;
    int mi;
    getchar();
    for(int i = 0; i < N; i++){
        string tmp;
        getline(cin, tmp);
        reverse(tmp.begin(), tmp.end());
        s[i] = tmp;
        if(s[i].size() < mj){
            mj = s[i].size();
            mi = i;
        }
    }
    string ans = "";
    int cnt = 0;
    int flag = 1;
    for(int i = 0; i < mj; i++){
        for(int j = 0; j < N; j++){
            if(s[j][i] != s[mi][i]){
                flag = 0;
                break;
            }
        }
        if(flag){
            cnt++;
            ans = s[0][i] + ans;
        }
        else break;
    }
    if(cnt == 0) cout << "nai" << endl;
    else cout << ans << endl;
    return 0;
}