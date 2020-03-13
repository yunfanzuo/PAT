#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

map<char, int> mm1, mm2;

struct mm{
    char c;
    int time;
}m1[3], m2[3];

int jud(char x, char y){
    if(x == y) return 0;
    else if((x == 'C' && y == 'J') || (x == 'J' && y == 'B') || (x == 'B' && y == 'C')) return 1;
    else return -1;
}

bool cmp(mm m, mm n){
    if(m.time == n.time){
        return m.c < n.c;
    }
    else return m.time > n.time;
}

int main()
{
    int N;
    int s = 0, p = 0, f = 0;
    char a, b;
    scanf("%d", &N);
    while(N--){
        getchar();
        scanf("%c %c", &a, &b);
        int tmp = jud(a, b);
        if(tmp == 1){
            mm1[a]++;
            s++;
        }
        else if(tmp == 0){
            p++;
        }
        else {
            f++;
            mm2[b]++;
        }
    }
    m1[0].c = 'C';
    m1[0].time = mm1['C'];
    m1[1].c = 'B';
    m1[1].time = mm1['B'];
    m1[2].c = 'J';
    m1[2].time = mm1['J'];
    m2[0].c = 'C';
    m2[0].time = mm2['C'];
    m2[1].c = 'B';
    m2[1].time = mm2['B'];
    m2[2].c = 'J';
    m2[2].time = mm2['J'];
    sort(m1, m1+3, cmp);
    sort(m2, m2+3, cmp);
    printf("%d %d %d\n%d %d %d\n", s, p, f, f, p, s);
    printf("%c %c\n", m1[0].c, m2[0].c);
    return 0;
}