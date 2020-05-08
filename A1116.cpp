//注意给予奖励的优先级

#include <cstdio>
#include <map>
using namespace std;

const int maxn = 1e4 + 7;
int prime[maxn];  //0 means prime
map<int, int> m;
map<int, int> res;

void sie() {
    for(int i = 2; i < maxn; i++) {
        if(prime[i] == 0) {
            for(int j = i + i; j < maxn; j += i) {
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    sie();
    int n, k, tmp;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &tmp);
        m[tmp] = i;
    }
    scanf("%d", &k);
    int q;
    for(int i = 0; i < k; i++) {
        scanf("%d", &q);
        if(m[q] == 1 && res[q] == 0) {
            printf("%04d: Mystery Award\n", q);
            res[q] = 1;
        }
        else if(m[q] && prime[m[q]] == 0 && res[q] == 0) {
            printf("%04d: Minion\n", q);
            res[q] = 1;
        }
        else if(m[q] && res[q] == 0) {
            printf("%04d: Chocolate\n", q);
            res[q] = 1;
        }
        else if(m[q] && res[q] == 1) {
            printf("%04d: Checked\n", q);
        }
        else {
            printf("%04d: Are you kidding?\n", q);
        }
    }
    return 0;
}