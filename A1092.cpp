//简单匹配数目就可以

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int lena = a.size();
    int lenb = b.size();
    map<char, int> m1, m2;
    for(int i = 0; i < lena; i++){
        m1[a[i]]++;
    }
    for(int i = 0; i < lenb; i++){
        m2[b[i]]++;
    }
    map<char, int>:: iterator it;
    int cnt1 = 0, cnt2 = 0, flag = 0;
    for(it = m2.begin(); it != m2.end(); it++){
        if(m1[it->first] >= it->second){
            cnt1 += m1[it->first] - it->second;
            m1[it->first] = 0;
        }
        else {
            cnt2 += it->second - m1[it->first];
            m2[it->first] = 0;
            flag = 1;
        }
    }
    for(it = m1.begin(); it != m1.end(); it++){
        if(it->second != 0){
            cnt1 += it->second;
        }
    }
    if(flag) cout << "No " << cnt2 << endl;
    else cout << "Yes " << cnt1 << endl;
    return 0;
}