#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

const int maxn = 1e5 + 7;

struct lr{
    char name[10];
    int y, m, d;
};

vector<lr> peo;

bool cmp(lr a, lr b){
    if(a.y == b.y){
        if(a.m == b.m) return a.d < b.d;
        else return a.m < b.m;
    }
    else return a.y < b.y;
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        int y, m, d;
        char n[10];
        scanf("%s %d/%d/%d", n, &y, &m, &d);
        if(y < 1814 || (y == 1814 && m < 9) || (y == 1814 && m == 9 && d < 6) || y > 2014 || (y == 2014 && m > 9) || (y == 2014 && m == 9 && d > 6)){
            continue;
        }
        lr tmp;
        strcpy(tmp.name, n);
        tmp.y = y;
        tmp.m = m;
        tmp.d = d;
        peo.push_back(tmp);
    }
    sort(peo.begin(), peo.end(), cmp);
    cout << peo.size() << ' ' << peo[0].name << ' ' << peo[peo.size() - 1].name << endl;
    return 0;
}
