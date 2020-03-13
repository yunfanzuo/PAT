#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 1007;
double m[maxn];

int main()
{
    int K;
    for(int i = 0; i < 2; i++){
        cin >> K;
        while(K--){
            int n;
            double tmp;
            cin >> n >> tmp;
            m[n] += tmp;
        }
    }
    int cnt = 0;
    for(int i = 0; i < 1007; i++){
        if(m[i] != 0){
            cnt++;
        }
    }
    printf("%d", cnt);
    for(int i = 1006; i >= 0; i--){
        if(m[i] != 0){
            printf(" %d %.1lf", i, m[i]);
        }
    }
    printf("\n");
    return 0;
}