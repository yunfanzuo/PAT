//这个题竟然是要一步一步按照需求去运行电梯
//并不是要计算给定序列的最优解

#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 107;
int a[maxn];
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0;
    int last = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
        if(a[i] > last) ans += (a[i] - last) * 6 + 5;
        else ans += (last - a[i]) * 4 + 5;
        last = a[i];
    }
    printf("%d\n", ans);
    return 0;
}