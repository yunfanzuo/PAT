//用i、j枚举狼人，此时的真相是除了i、j外均为人。
//遍历每个人的说法，若与真相不符，放入撒谎数组。
//检查撒谎数组是否只有两个元素，并且是否为一人一狼。

#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

const int maxn = 105;
int a[maxn];
int t[maxn];  //保存当前情况下的真相
vector<int> v;  //保存说谎的下标

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }  
    //枚举狼i和j
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            fill(t, t + maxn, 1);  //初始化都是人
            t[i] = -1;
            t[j] = -1;
            v.clear();
            for(int k = 1; k <= n; k++) {
                if(t[abs(a[k])] * a[k] < 0) {
                    v.push_back(k);
                }
            }
            if(v.size() == 2 && t[v[0]] * t[v[1]] == -1) {
                printf("%d %d\n", i, j);  //要输出的是狼
                return 0;
            }
        }
    }
    printf("No Solution\n");
    return 0;
}