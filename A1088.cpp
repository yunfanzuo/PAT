//无脑模拟分数加减乘除即可，一发AC，真的牛皮

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
typedef long long LL;

LL gcd(LL x, LL y) {
    return y ? gcd(y, x % y) : x;
}

void opt(LL fz, LL fm) {
    if(fz == 0) {
        printf("0");
    }
    else if(fm == 1) {
        if(fz >= 0) printf("%lld", fz);
        else printf("(%lld)", fz);
    }
    else if(fm == 0) {
        printf("Inf");
    }
    else if(abs(fz) > abs(fm)) {
        if((fz < 0 || fm < 0) && (fz > 0 || fm > 0)) {
            printf("(-%lld %lld/%lld)", abs(fz / fm), abs(fz) % abs(fm), abs(fm));
        }
        else {
            printf("%lld %lld/%lld", abs(fz / fm), abs(fz) % abs(fm), abs(fm));
        }
    }
    else {
        if((fz < 0 || fm < 0) && (fz > 0 || fm > 0)) {
            printf("(-%lld/%lld)", abs(fz), abs(fm));
        }
        else printf("%lld/%lld", fz, fm);
    }
}

void add(LL a, LL b, LL c, LL d) {
    LL fz = a * d + b * c;
    LL fm = b * d;
    LL tmp = gcd(fz, fm);
    fz /= tmp;
    fm /= tmp;
    opt(a, b);
    printf(" + ");
    opt(c, d);
    printf(" = ");
    opt(fz, fm);
    printf("\n");
}

void sub(LL a, LL b, LL c, LL d) {
    LL fz = a * d - b * c;
    LL fm = b * d;
    LL tmp = gcd(fz, fm);
    fz /= tmp;
    fm /= tmp;
    opt(a, b);
    printf(" - ");
    opt(c, d);
    printf(" = ");
    opt(fz, fm);
    printf("\n");
}

void mul(LL a, LL b, LL c, LL d) {
    LL fz = a * c;
    LL fm = b * d;
    LL tmp = gcd(fz, fm);
    fz /= tmp;
    fm /= tmp;
    opt(a, b);
    printf(" * ");
    opt(c, d);
    printf(" = ");
    opt(fz, fm);
    printf("\n");
}

void quo(LL a, LL b, LL c, LL d) {
    LL fz = a * d;
    LL fm = b * c;
    LL tmp = gcd(fz, fm);
    fz /= tmp;
    fm /= tmp;
    opt(a, b);
    printf(" / ");
    opt(c, d);
    printf(" = ");
    opt(fz, fm);
    printf("\n");
}

int main()
{
    LL a1, b1, a2, b2;
    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
    LL tmp1 = gcd(abs(a1), abs(b1));
    a1 /= tmp1;
    b1 /= tmp1;
    LL tmp2 = gcd(abs(a2), abs(b2));
    a2 /= tmp2;
    b2 /= tmp2;
    add(a1, b1, a2, b2);
    sub(a1, b1, a2, b2);
    mul(a1, b1, a2, b2);
    quo(a1, b1, a2, b2);
    return 0;
}