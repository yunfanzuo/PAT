// v2.0
#include <cstdio>
#include <map>
#include <iostream>
#include <string>
using namespace std;

map<int, string> m;

int main()
{
    m[0] = "zero";
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[5] = "five";
    m[6] = "six";
    m[7] = "seven";
    m[8] = "eight";
    m[9] = "nine";
    char c;
    int n = 0;
    while((c = getchar()) != '\n'){
        n += int(c - '0');
    }
    string res = to_string(n);
    int lens = res.size();
    for(int i = 0; i < lens - 1; i++) {
        cout << m[int(res[i] - '0')] << ' ';
    }
    cout << m[int(res[lens - 1] - '0')] << endl;
}

// v1.0
// //注意输入为 0 的情况

// #include <cstdio>
// #include <map>
// #include <iostream>
// #include <string>
// using namespace std;

// map<int, string> m;

// int main()
// {
//     m[0] = "zero";
//     m[1] = "one";
//     m[2] = "two";
//     m[3] = "three";
//     m[4] = "four";
//     m[5] = "five";
//     m[6] = "six";
//     m[7] = "seven";
//     m[8] = "eight";
//     m[9] = "nine";
//     char c;
//     int n = 0;
//     while((c = getchar()) != '\n'){
//         n += int(c - '0');
//     }
//     string res = "";
//     while(n){
//         res = char(n % 10 + '0') + res;
//         n /= 10;
//     }
//     int lens = res.size();
//     if(lens == 0){
//         cout << m[0] << endl;
//     }
//     else {
//         int i;
//         for(i = 0; i < lens - 1; i++){
//             cout << m[int(res[i] - '0')] << ' ';
//         }
//         cout << m[int(res[i] - '0')] << endl;
//     }
//     return 0;
// }