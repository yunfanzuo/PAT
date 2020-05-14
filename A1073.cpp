//符号单独读入，整数int读，小数字符串读，指数int读

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char sgn;
    int zs, mc;
    char xs[10007];
    sgn = getchar();  //符号
    scanf("%d.", &zs);  //整数
    int dex = 0;
    char c;
    while((c = getchar()) != 'E'){  //小数
        xs[dex++] = c;
    }
    scanf("%d", &mc);  //幂次
    if(sgn == '-') printf("-");
    if(mc < 0){
        printf("0.");
        for(int i = 0; i < mc - 1; i++){
            printf("0");
        }
        printf("%d%s", zs, xs);
    }
    else {
        printf("%d", zs);
        if(mc >= dex){
            printf("%s", xs);
            for(int i = 0; i < mc - dex; i++){
                printf("0");
            }
        }
        else {
            int i;
            for(i = 0; i < mc; i++){
                printf("%c", xs[i]);
            }
            printf(".");
            for(; i < dex; i++){
                printf("%c", xs[i]);
            }
        }
    }
    printf("\n");
    return 0;
}