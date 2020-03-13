#include <cstdio>
#include <iostream>
using namespace std;
typedef long long LL;
int main()
{
    int cnt[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &cnt[i]);
    }
    if(cnt[0] == 0){
        for(int i = 1; i < 10; i++){
            if(cnt[i] != 0){
                for(int j = 0; j < cnt[i]; j++){
                    printf("%d", i);
                }
            }
        }
    }
    else {
        for(int i = 1; i < 10; i++){
            if(cnt[i] != 0){
                printf("%d", i);
                cnt[i]--;
                break;
            }
        }
        for(int i = 0; i < 10; i++){
            if(cnt[i] != 0){
                for(int j = 0; j < cnt[i]; j++){
                    printf("%d", i);
                }
            }
        }
    }
    printf("\n");
    return 0;
}