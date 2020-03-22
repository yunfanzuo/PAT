//题意是如果有一个十进制数 N 自己是素数，同时转换成 D 进制后前后反转一下再转换为十进制仍然是素数，就输出 Yes，否则输出 No

#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int maxn = 1e5 + 7;
int prime[maxn];
void sol(){
    memset(prime, 1, sizeof prime);
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i < maxn; i++){
        if(prime[i]){
            for(int j = i + i; j < maxn; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    int n, d;
    sol();
    while(scanf("%d", &n) && n >= 0){
        scanf("%d", &d);
        int a[50];
        int dex = 0;
        int x = n;
        while(n){
            a[dex++] = n % d;
            n /= d;
        }
        int res = 0;
        int tmp = 1;
        for(int i = dex-1; i >= 0; i--){
            res += a[i] * tmp;
            tmp *= d;
        }
        if(prime[res] && prime[x]) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}