#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct stu{
    string num;
    int d, c;
    int sum;
    int flag;
}s[100005];

bool cmp(stu a, stu b){
    if(a.flag == b.flag){
        if(a.sum == b.sum){
            if(a.d == b.d) return a.num < b.num;
            else return a.d > b.d;
        }
        else return a.sum > b.sum;
    }
    else return a.flag < b.flag;
}

int main()
{
    int N, L, H;
    cin >> N >> L >> H;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        cin >> s[i].num >> s[i].d >> s[i].c;
        s[i].sum = s[i].d + s[i].c;
        if(s[i].d >= L && s[i].c >= L) cnt++;
        if(s[i].c >= H && s[i].d >= H) s[i].flag = 1;
        else if(s[i].d >= H && s[i].c < H && s[i].c >= L) s[i].flag = 2;
        else if(s[i].d < H && s[i].c < H && s[i].d >= L && s[i].c >= L && s[i].d >= s[i].c) s[i].flag = 3;
        else if(s[i].d >= L && s[i].c >= L) s[i].flag = 4;
        else s[i].flag = 5;
    }
    sort(s, s + N, cmp);
    cout << cnt << endl;
    for(int i = 0; i < cnt; i++){
        cout << s[i].num << ' ' << s[i].d << ' ' << s[i].c << endl; 
    }
    return 0;
}