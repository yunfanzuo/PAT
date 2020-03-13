#include <cstdio>
#include <algorithm>
#include <sstream>
#include <iostream>
using namespace std;

bool cmp(char a, char b){
    return a > b;
}

int main()
{
    int n;
    string s;
    int x, y;
    scanf("%d", &n);
    while(1){
        stringstream ss;
        ss << n;
        s = ss.str();
        if(s.size() < 4){
            int len = 4 - s.size();
            while(len--){
                s = '0' + s;
            }
        }
        sort(s.begin(), s.end(), cmp);
        x = stoi(s);
        sort(s.begin(), s.end());
        y = stoi(s);
        n = x - y;
        printf("%04d - %04d = %04d\n", x, y, n);
        if(n == 0 || n == 6174) break;
    }
    return 0;
}