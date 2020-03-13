#include <cstdio>
#include <iostream>
using namespace std;
typedef long long LL;
int main()
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        LL a, b, c;
        cin >> a >> b >> c;
        if(a-c+b > 0){
            cout << "Case #" << i << ": true" << endl;
        }
        else cout << "Case #" << i << ": false" << endl;
    }
    return 0;
}