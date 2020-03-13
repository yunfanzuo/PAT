#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 1e5 + 7;
double a[maxn];

int main()
{
    int N;
    double p;
    scanf("%d %lf", &N, &p);
    for(int i = 0; i < N; i++){
        scanf("%lf", &a[i]);
    }
    sort(a, a + N);
    int cnt = 1;
    for(int i = 0; i < N - 1; i++){
        for(int j = i + cnt; j < N; j++){
            if(a[j] <= a[i] * p) cnt++;
            else break;
        }
    }
    printf("%d\n", cnt);
    return 0;
}