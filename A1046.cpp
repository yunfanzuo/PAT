//因为围成一个圈，所以只需要对距离数列求一个前缀和
//同时需要注意与另一半的距离相比较

#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e5 + 7;
int dis[maxn];
int pre[maxn];

int main()
{
    int N, M;
    scanf("%d", &N);
    int tot = 0;
    for(int i = 1; i <= N; i++){
        scanf("%d", &dis[i]);
        tot += dis[i];
        pre[i] = pre[i - 1] + dis[i];
    }
    scanf("%d", &M);
    int x, y;
    while(M--){
        scanf("%d %d", &x, &y);
        if(x > y){
            int tmp = x;
            x = y;
            y = tmp;
        }
        int a = pre[y - 1] - pre[x - 1];
        int b = tot - a;
        printf("%d\n", min(a, b));
    }
    return 0;
}