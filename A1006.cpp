#include <cstdio>
#include <iostream>
using namespace std;
#define INF 0x3f3f3f
int main()
{
    int t;
    cin >> t;
    string id, ans1, ans2;
    int h, m, s, res1 = INF, res2 = 0, tmp;
    char c;
    while(t--) {
        cin >> id;
        cin >> h >> c >> m >> c >> s;
        tmp = h * 3600 + m * 60 + s;
        if(tmp < res1) {
            ans1 = id;
            res1 = tmp;
        }
        cin >> h >> c >> m >> c >> s;
        tmp = h * 3600 + m * 60 + s;
        if(tmp > res2) {
            ans2 = id;
            res2 = tmp;
        }
    }
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}

// #include <cstdio>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// struct t {
//     string id;
//     int t1, t2;

//     t(string s, int x, int y) : id(s), t1(x), t2(y) {}
// };

// vector<t> v;

// bool cmp1(t a, t b) {
//     if(a.t1 < b.t1) return true;
//     else return false;
// }

// bool cmp2(t a, t b) {
//     if(a.t2 > b.t2) return true;
//     else return false;
// }

// int main()
// {
//     int m;
//     cin >> m;
//     while(m--) {
//         string s;
//         int a, b, c;
//         char d;
//         cin >> s;
//         cin >> a >> d >> b >> d >> c;
//         int x = a * 3600 + b * 60 + c;
//         cin >> a >> d >> b >> d >> c;
//         int y = a * 3600 + b * 60 + c;
//         v.push_back(t(s, x, y));
//     }
//     sort(v.begin(), v.end(), cmp1);
//     cout << v[0].id << ' ';
//     sort(v.begin(), v.end(), cmp2);
//     cout << v[0].id << endl;
//     return 0;
// }