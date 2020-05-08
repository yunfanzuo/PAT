//简单题 set用法

#include <cstdio>
#include <map>
#include <set>
using namespace std;

set<int> s;
int main()
{
    int n, tmp, res;
    scanf("%d", &n);
    while(n--) {
        res = 0;
        scanf("%d", &tmp);
        while(tmp) {
            res += tmp % 10;
            tmp /= 10;
        }
        s.insert(res);
    }
    printf("%d\n", s.size());
    set<int>:: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        if(it == s.begin()) printf("%d", *it);
        else printf(" %d", *it);
    }
    return 0;
}