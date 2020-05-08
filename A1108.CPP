//使用sscanf和sprintf格式化数据

#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    char a[50], b[50];
    scanf("%d", &n);
    double ans = 0;
    int cnt = 0;
    while(n--) {
        scanf("%s", a);
        double tmp;
        sscanf(a, "%lf", &tmp);  //把a中的数据以double的形式读到tmp里面
        sprintf(b, "%.2f", tmp);  //把tmp中的数据以保留两位小数的形式写到b里面
        int len = strlen(a);
        int flag = 0;
        for(int i = 0; i < len; i++) {
            if(a[i] != b[i]) {
                flag = 1;
                break;
            }
        }
        if(flag || tmp < -1000 || tmp > 1000) {
            printf("ERROR: %s is not a legal number\n", a);
        } else {
            ans += tmp;
            cnt++;
        }
    }
    if(cnt == 1) {
        printf("The average of 1 number is %.2f\n", ans);
    }
    else if(cnt > 1) {
        printf("The average of %d numbers is %.2f\n", cnt, ans / cnt);
    }
    else {
        printf("The average of 0 numbers is Undefined\n");
    }
    return 0;
}


// #include <cstdio>
// #include <iostream>
// #include <cctype>
// #include <string>
// #include <iomanip>
// using namespace std;

// string a[105];
// int res[105];

// int main()
// {   
//     int n;
//     cin >> n;
//     double ans = 0;
//     int cnt = 0;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         string tmp = a[i];
//         int len = tmp.size();
//         int flag = 0;
//         int y = 0, m = 0;
//         for(int j = 0; j < len; j++){
//             if((tmp[j] > '9' || tmp[j] < '0') && tmp[j] != '.' && tmp[j] != '-'){
//                 res[i] = 1;
//                 cnt++;
//                 break;
//             }
//             if(tmp[j] == '.'){
//                 y++;
//                 if(y > 1 || j == 0){
//                     res[i] = 1;
//                     cnt++;
//                     break;
//                 }
//             }
//             if(tmp[j] == '-'){
//                 m++;
//                 if(m > 1 || j != 0){
//                     res[i] = 1;
//                     cnt++;
//                     break;
//                 }
//                 if(tmp[j+1] == '.'){
//                     res[i] = 1;
//                     cnt++;
//                     break;
//                 }
//             }
//         }
//         if(res[i] == 0){
//             double x = stod(tmp);
//             if(x > 1000 || x < -1000){
//                 res[i] = 1;
//                 cnt++;
//             }
//             if(x < 0){
//                 if(x * 100 < int(x * 100)){
//                     res[i] = 1;
//                     cnt++;
//                 }
//             }
//             else if(x > 0){
//                 if(x * 100 > int(x * 100)){
//                     res[i] = 1;
//                     cnt++;
//                 }
//             }
//             if(res[i] == 0) ans += x;
//         }  
//     }
//     for(int i = 0; i < n; i++){
//         if(res[i]){
//             cout << "ERROR: " << a[i] << " is not a legal number" << endl;
//         }
//     }
//     ans /= (n - cnt);
//     cout << "The average of " << n - cnt;
//     if(n == cnt) cout << " numbers is Undefined" << endl;
//     else if(n - cnt == 1) cout << " number is " << fixed << setprecision(2) << ans << endl;
//     else cout << " numbers is " << fixed << setprecision(2) << ans << endl;
//     return 0;
// }