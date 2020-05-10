/*
注意例如：
3
1 2 3
应输出4这种情况
*/

#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

map<int, int> m;

int main()
{
    int n;
    scanf("%d", &n);
    while(n--) {
        int tmp;
        scanf("%d", &tmp);
        if(tmp > 0) {
            m[tmp]++;
        }
    }
    map<int, int>:: iterator it;
    int res = 1;
    int flag = 1;
    for(it = m.begin(); it != m.end(); it++) {
        if(it -> first == res) {
            res++;
        }
        else {
            printf("%d\n", res);
            flag = 0;
            break;
        }
    }
    if(flag) printf("%d\n", res);
    return 0;
}