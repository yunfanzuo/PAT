//map存一下第二个字符串出现过的字符，输出第一个时对比一下即可

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int lena = a.size();
    int lenb = b.size();
    map<char, int> m;
    for(int i = 0; i < lenb; i++){
        m[b[i]] = 1;
    }
    for(int i = 0; i < lena; i++){
        if(m[a[i]]) continue;
        else cout << a[i];
    }
    cout << endl;
    return 0;
}