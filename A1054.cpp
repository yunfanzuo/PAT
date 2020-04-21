//cin会超时
//map必须在读入时直接进行处理，之后遍历map找最大值也会超时

#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

map<int, int> mp;

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int tmp;
    int ans = 0;
    int res = 0;
    for(int i = 0; i < m * n; i++){
        scanf("%d", &tmp);
        mp[tmp]++;
        if(mp[tmp] > res){
            res = mp[tmp];
            ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}