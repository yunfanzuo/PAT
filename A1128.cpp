//无脑进行一下n皇后的判断就可以了，数据很小

#include <cstdio>
#include <cmath>
using namespace std;

const int maxn = 1007;
int r[maxn];

int main()
{
    int k, n;
    scanf("%d", &k);
    while(k--) {
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &r[i]);
        }
        int flag = 1;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(r[j] == r[i] || abs(j - i) == abs(r[j] - r[i])) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 0) break;
        }
        if(flag == 0) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}