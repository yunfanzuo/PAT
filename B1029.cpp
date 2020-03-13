#include <cstdio>
#include <iostream>
#include <map>
#include <cctype>
using namespace std;
int main()
{
    string a, b;
    map<char, int> mm;
    cin >> a >> b;
    int lena = a.size();
    int lenb = b.size();
    int i = 0, j = 0;
    for(; i < lenb; i++){
        for(; j < lena; j++){
            if(b[i] == a[j]){
                j++;
                break;
            }
            if(isalpha(a[j])) a[j] = toupper(a[j]);
            if(mm[a[j]] == 0){
                mm[a[j]]++;
                printf("%c", a[j]);
            }
        }
    }
    for(int k = j; k < lena; k++){
        if(isalpha(a[k])) a[k] = toupper(a[k]);
            if(mm[a[k]] == 0){
                mm[a[k]]++;
                printf("%c", a[k]);
            }
    }
    printf("\n");
    return 0;
}