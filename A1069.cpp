//注意不到四位的情况需要补0

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(char a, char b){
    return a > b;
}

int main()
{
    string n;
    cin >> n;
    string s1, s2;
    while(1){
        int tmp = 4 - n.size();
        while(tmp--){
            n = '0' + n;
        }
        sort(n.begin(), n.end());
        s1 = n;
        sort(n.begin(), n.end(), cmp);
        s2 = n;
        int x = stoi(s1), y = stoi(s2);
        int res = y - x;
        printf("%04d - %04d = %04d\n", y, x, res);
        if(res == 0 || res == 6174) break;
        n = to_string(res);
    }
    return 0;
}