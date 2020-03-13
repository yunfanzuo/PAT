#include <iostream>
#include <vector>
using namespace std;

int ans0 = 0;
int ans1 = 0;
int ans2 = 0;
double ans3 = 0.0;
int ans4 = 0;

int main()
{
    int N, n;
    int cnt = 1;
    int cnt2 = 0;
    int res = 0;
    int flag = 0;
    cin >> N;
    while(N--){
        cin >> n;
        if(n % 5 == 0 && n % 2 == 0){
            ans0 += n;
        }
        if(n % 5 == 1){
            flag = 1;
            if(cnt & 1){
                ans1 += n;
            }
            else ans1 -= n;
            cnt++;
        }
        if(n % 5 == 2){
            ans2++;
        }
        if(n % 5 == 3){
            res += n;
            cnt2++;
        }
        if(n % 5 == 4){
            if(n > ans4){
                ans4 = n;
            }
        }
    }
    if(res) ans3 = (double)res / cnt2;
    if(ans0) printf("%d", ans0);
    else printf("N");
    if(ans1 || flag) printf(" %d", ans1);
    else printf(" N");
    if(ans2) printf(" %d", ans2);
    else printf(" N");
    if(ans3) printf(" %.1lf", ans3);
    else printf(" N");
    if(ans4) printf(" %d", ans4);
    else printf(" N");
    return 0;
}