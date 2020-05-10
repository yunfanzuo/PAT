//简单题，按照题意操作即可

#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

const int maxm = 1007;
string fow[maxm];
map<string, int> mm;

int main()
{
    int m, n, s;
    cin >> m >> n >> s;
    for(int i = 1; i <= m; i++) {
        cin >> fow[i];
    }
    int flag = 0;
    for(int i = s; i <= m; i += n) {
        if(mm[fow[i]] == 0) {
            cout << fow[i] << endl;
            mm[fow[i]]++;
            flag = 1;
        }
        else {
            int j;
            for(j = i + 1; j <= m; j++) {
                if(mm[fow[j]] == 0) {
                    cout << fow[j] << endl;
                    mm[fow[j]]++;
                    break;
                }
            }
            i = j;
        }
    }
    if(flag == 0) cout << "Keep going..." << endl;
    return 0;
}