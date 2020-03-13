#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
const int maxn = 1e5 + 7;
int res[maxn];
map<int, int> dat, nxt;
int main()
{
    int a, n, k, tmp;
    cin >> a >> n >> k;
    int p, q;
    for(int i = 0; i < n; i++){
        cin >> tmp >> p >> q;
        dat[tmp] = p;
        nxt[tmp] = q;
    }
    int cnt = 0;  //有可能存在不属于这条链表的节点
    while(a != -1){
        res[cnt++] = a;
        a = nxt[a];
    }
    for(int i = 0; i < (cnt - cnt % k); i += k)
        reverse(res + i, res + i + k);
    for(int j = 0; j < cnt - 1; j++)
        printf("%05d %d %05d\n", res[j], dat[res[j]], res[j + 1]);  //此时输出的 Next 不再是之前的，而是重新链接后的
    printf("%05d %d -1\n", res[cnt - 1], dat[res[cnt - 1]]);
    return 0;
}
