#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int N;
    char c;
    scanf("%d %c", &N, &c);
    for(int i = 0; i < N; i++){
        printf("%c", c);
    }
    printf("\n");
    int b = (double)N / 2 + 0.5;
    for(int i = 0; i < b - 2; i++){
        printf("%c", c);
        for(int j = 0; j < N - 2; j++){
            printf(" ");
        }
        printf("%c", c);
        printf("\n");
    }
    for(int i = 0; i < N; i++){
        printf("%c", c);
    }
    printf("\n");
    return 0;
}