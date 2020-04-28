//考lcm和gcd

#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

struct rational{
    LL fz;
    LL fm;
} r[107];

LL gcd(LL x, LL y){
    return y == 0 ? x : gcd(y, x % y);
}

LL lcm(LL x, LL y){
    return x * y / gcd(x, y);
}

int main()
{
    LL n;
    scanf("%lld", &n);
    LL xishu = 0, ansfm = 1, ansfz = 0;
    for(int i = 0; i < n; i++){
        scanf("%lld/%lld", &r[i].fz, &r[i].fm);
        LL d = gcd(abs(r[i].fz), abs(r[i].fm));
        r[i].fz /= d;
        r[i].fm /= d;
        ansfm = lcm(r[i].fm, ansfm);
    }
    for(int i = 0; i < n; i++){
        ansfz += ansfm / r[i].fm * r[i].fz;
    }
    LL c = gcd(ansfz, ansfm);
    ansfz /= c;
    ansfm /= c;
    xishu += ansfz / ansfm;
    ansfz %= ansfm;
    if(xishu == 0) {
        if(ansfz == 0) printf("0\n");
        else printf("%lld/%lld\n", ansfz, ansfm);
    }
    else {
        if(ansfz == 0) printf("%lld\n", xishu);
        else printf("%lld %lld/%lld\n", xishu, ansfz, ansfm);
    }
    return 0;
}