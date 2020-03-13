#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

const int maxn = 1000000;
int a[maxn];
vector<int> b;

void sol(){
    memset(a, 1, sizeof a);
    for(int i = 2; i < maxn; i++){
        if(a[i]){
            for(int j = i+i; j < maxn; j += i){
                a[j] = 0;
            }
            b.push_back(i);
        }
    }
}

int main()
{
    sol();
    int m, n;
    cin >> m >> n;
    int cnt = 0;
    for(int i = m-1; i <= n-1; i++){
        cnt++;
        if(cnt % 10 == 1){
            printf("%d", b[i]);
        }
        else {
            printf(" %d", b[i]);
        }
        if(cnt != 0 && cnt % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}