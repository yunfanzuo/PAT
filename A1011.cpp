//注意循环判断找最大值时 m 的初始化

#include <iostream>
#include <cstdio>
using namespace std;

int res[3];

int main()
{
    double tmp;
    char s[3] = {'W', 'T', 'L'};
    double ans = 1;
    for(int i = 0; i < 3; i++){
        double m = 0;
        for(int j = 0; j < 3; j++){
            scanf("%lf", &tmp);
            if(tmp > m){
                res[i] = j;
                m = tmp;
            }
        }
        ans *= m;
    }
    printf("%c %c %c ", s[res[0]], s[res[1]], s[res[2]]);
    printf("%.2f\n", (ans * 0.65 - 1) * 2);
    return 0;
}