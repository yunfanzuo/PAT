#include <cstdio>
#include <iostream>
using namespace std;
typedef pair<int, double> pid;

pid x[15], y[15];
double res[2005];

int main()
{
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x[i].first >> x[i].second;
    }
    cin >> m;
    for(int i = 0; i < n; i++) {
        cin >> y[i].first >> y[i].second;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            res[x[i].first + y[j].first] += x[i].second * y[j].second;
        }
    }
    int cnt = 0;
    for(int i = 2004; i >= 0; i--) {
        if(res[i] != 0.0) {
            cnt++;
        }
    }
    printf("%d", cnt);
    for(int i = 2004; i >= 0; i--) {
        if(res[i] != 0.0) {
            printf(" %d %.1lf", i, res[i]);
        }
    }
    printf("\n");
    return 0;
}