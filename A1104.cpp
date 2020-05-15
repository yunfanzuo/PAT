/*找到规律即可，在总和中，每个数出现次数为
1：n * 1
2: (n-1) * 2
3: (n-2) * 3
...
n : 1 * n
以此类推
*/

#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 1e5 + 7;
double a[maxn];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%lf", &a[i]);
    }
    double ans = 0.0;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n - i; j++){
    //         for(int k = i; k <= i + j; k++){
    //             ans += a[k];
    //         }
    //     }
    // }
    for(int i = 1; i <= n; i++){
        ans += a[i] * i * (n - i + 1);
    }
    printf("%.2f\n", ans);
    return 0;
}