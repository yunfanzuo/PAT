//符号单独读入，整数int读，小数字符串读，幂次int读

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char sgn1, sgn2;
    int zs, mc;
    char xs[10007];
    sgn1 = getchar();
    scanf("%d.", &zs);
    int dex = 0;
    char c;
    while((c = getchar()) != 'E'){
        xs[dex++] = c;
    }
    sgn2 = getchar();
    scanf("%d", &mc);
    if(sgn1 == '-') printf("-");
    if(sgn2 == '-'){
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