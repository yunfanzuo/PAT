//假如k = 3,前面出现aaa,后面出现a,则a没问题
//只有这个字母在任何地方出现时都是k个连续它才有问题

#include <cstdio>
#include <cstring>
#include <queue>
#include <map>
using namespace std;

char s[1007];
map<char, int> m;
map<char, int> res;
int main()
{
    int k;
    scanf("%d %s", &k, s);
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        int flag = 1;
        if(i + k - 1 < len) {
            for(int j = i + 1; j < i + k; j++) {
                if(s[j] != s[i]) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 0) m[s[i]] = 1;
            else {
                if(m[s[i]] == 0) m[s[i]] = 0;
                i += k - 1;
            }
        }
        else {
            m[s[i]] = 1;
        }
    }
    for(int i = 0; i < len; i++) {
        if(m[s[i]] == 0) {
            if(res[s[i]] == 0) {
                printf("%c", s[i]);
                res[s[i]] = 1;
            }
            i += k - 1;
        }
    }
    printf("\n");
    for(int i = 0; i < len; i++) {
        printf("%c", s[i]);
        if(m[s[i]] == 0) i += k - 1;
    }
    printf("\n");
    return 0;
}

/*
#include <cstdio>
#include <cstring>
#include <queue>
#include <map>
using namespace std;

char s[1007];
int res[1007];
map<char, int> m;
map<char, int> m2;

int main()
{
    int k;
    scanf("%d %s", &k, s);
    int len = strlen(s);
    int tmp;
    for(int i = 0; i < len; i++) {
        int flag = 1;
        if(i + k - 1 < len) {
            for(int j = i + 1; j < i + k; j++) {
                if(s[j] != s[i]) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 0) m[s[i]] = 1;
            if(flag && m[s[i]] == 0) {
                if(m2[s[i]] == 0) {
                    printf("%c", s[i]);
                    m2[s[i]] = 1;
                }
                res[i] = 1;
                i += k - 1;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < len; i++) {
        printf("%c", s[i]);
        if(res[i]) {
            i += k - 1;
        }
    }
    printf("\n");
    return 0;
}
*/