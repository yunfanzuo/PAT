//测试点2：在某一项的排名上，若出现相同，则为 1、1、3、4 这样

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;

const int maxn = 2007;

struct stu{
    string id;
    int c, m, e;
    int a;
    int rkc, rkm, rke, rka;
} st[maxn];

bool cmpc(stu a, stu b) {
    if(a.c > b.c) return true;
    else return false;
}

bool cmpm(stu a, stu b) {
    if(a.m > b.m) return true;
    else return false;
}

bool cmpe(stu a, stu b) {
    if(a.e > b.e) return true;
    else return false;
}

bool cmpa(stu a, stu b) {
    if(a.a > b.a) return true;
    else return false; 
}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> st[i].id >> st[i].c >> st[i].m >> st[i].e;
        st[i].a = int((st[i].c + st[i].m + st[i].e) / 3.0 + 0.5);
    }
    sort(st + 1, st + n + 1, cmpc);
    for(int i = 1; i <= n; i++) {
        if(st[i].c == st[i-1].c) st[i].rkc = st[i-1].rkc;
        else st[i].rkc = i;
    }
    sort(st + 1, st + n + 1, cmpm);
    for(int i = 1; i <= n; i++) {
        if(st[i].m == st[i-1].m) st[i].rkm = st[i-1].rkm;
        else st[i].rkm = i;
    }
    sort(st + 1, st + n + 1, cmpe);
    for(int i = 1; i <= n; i++) {
        if(st[i].e == st[i-1].e) st[i].rke = st[i-1].rke;
        else st[i].rke = i;
    }
    sort(st + 1, st + n + 1, cmpa);
    for(int i = 1; i <= n; i++) {
        if(st[i].a == st[i-1].a) st[i].rka = st[i-1].rka;
        else st[i].rka = i;
    }
    map<string, stu> mm;
    for(int i = 1; i <= n; i++) {
        mm[st[i].id] = st[i];
    }
    while(m--) {
        string tmp;
        cin >> tmp;
        if(mm.find(tmp) == mm.end()) {
            cout << "N/A" << endl;
        }
        else {
            if(mm[tmp].rka <= mm[tmp].rkc && mm[tmp].rka <= mm[tmp].rkm && mm[tmp].rka <= mm[tmp].rke) {
                cout << mm[tmp].rka << " A" << endl;
            }
            else if(mm[tmp].rkc < mm[tmp].rka && mm[tmp].rkc <= mm[tmp].rkm && mm[tmp].rkc <= mm[tmp].rke) {
                cout << mm[tmp].rkc << " C" << endl;
            }
            else if(mm[tmp].rkm < mm[tmp].rka && mm[tmp].rkm < mm[tmp].rkc && mm[tmp].rkm <= mm[tmp].rke) {
                cout << mm[tmp].rkm << " M" << endl;
            }
            else cout << mm[tmp].rke << " E" << endl;
        }
    }
    return 0;
}