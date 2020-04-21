//直接模拟

#include <cstdio>
using namespace std;
int main()
{
    int a, b, c;
    int d, e, f;
    scanf("%d.%d.%d", &a, &b, &c);
    scanf("%d.%d.%d", &d, &e, &f);
    int ans3 = (c + f) % 29;
    int tmp3 = (c + f) / 29;
    int ans2 = (b + e + tmp3) % 17;
    int tmp2 = (b + e + tmp3) / 17;
    int ans1 = a + d + tmp2;
    printf("%d.%d.%d\n", ans1, ans2, ans3);
    return 0;
}