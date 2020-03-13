#include <cstdio>
#include <iostream>
using namespace std;

int res[55];

int main()
{   
    int N;
    char c;
    for(int i = 0; i < 30; i++){
        int k = 2 * i + 1;
        res[i] = (k + 1) * (k / 2 + 1) - 1;
    }
    scanf("%d %c", &N, &c);
    int ans = 0;
    for(int i = 0; i < 29; i++){
        if(res[i] <= N && N < res[i+1]){
            ans = i;
        }
    }
    int sheng = N - res[ans];
    int row = ans * 2 + 1;
    int tmp = row;
    while(tmp > 0){
        int t = tmp;
        int tt = (row - t) / 2;
        while(tt--) printf(" ");
        while(t--) printf("%c", c);
        tmp -= 2;
        printf("\n");
    }
    tmp = 3;
    while(tmp <= row){
        int t = tmp;
        int tt = (row - t) / 2;
        while(tt--) printf(" ");
        while(t--) printf("%c", c);
        tmp += 2;
        printf("\n");
    }
    printf("%d\n", sheng);
    return 0;
}