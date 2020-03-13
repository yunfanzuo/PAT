#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1005;
struct yb{
    int n;
    int p;
    double xjb;
} YB[maxn];

bool cmp(yb x, yb y){
    return x.xjb > y.xjb;
}

int main()
{
    int n, d;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> YB[i].n;
    }
    for(int i = 0; i < n; i++){
        cin >> YB[i].p;
    }
    for(int i = 0; i < n; i++){
        YB[i].xjb = (double)YB[i].p / YB[i].n;
    }
    sort(YB, YB + n, cmp);
    double ans = 0;
    for(int i = 0; i < n; i++){
        if(d <= YB[i].n){
            ans += YB[i].xjb * d;
            break;
        }
        else {
            ans += YB[i].p;
            d -= YB[i].n;
        }
    }
    printf("%.2f\n", ans);
    return 0;
}