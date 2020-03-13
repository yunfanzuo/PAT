#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

typedef long long LL;
char d[50];

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = a + b;
    if(ans == 0) printf("0\n");
    else {
        int flag = 0;
        if(ans < 0) flag = 1;
        ans = abs(ans);
        int cnt = 0;
        int i = 0;
        while(ans){
            if(cnt != 0 && cnt % 3 == 0){
                d[i++] = ',';
            }
            d[i++] = ans % 10 + '0';
            ans /= 10;
            cnt++;
        }
        if(flag) printf("-");
        for(int j = i-1; j >= 0; j--){
            printf("%c", d[j]);
        }
        printf("\n");
    }
    return 0;
}