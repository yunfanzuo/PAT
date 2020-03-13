#include <cstdio>
#include <iostream>
using namespace std;
int main()
{   
    int a, b;
    cin >> a >> b;
    int t = double(b - a) / 100 + 0.5;
    int h = t / 3600;
    t %= 3600;
    int m = t / 60;
    t %= 60;
    int s = t;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}