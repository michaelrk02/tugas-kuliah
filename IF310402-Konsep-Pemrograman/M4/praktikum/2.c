#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef long long i64;

int main() {
    i64 a, b, c;
    i64 max_ab, max_abc;
    
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a > b) {
        max_ab = a;
    } else {
        max_ab = b;
    }
    if (max_ab > c) {
        max_abc = max_ab;
    } else {
        max_abc = c;
    }
    printf("%lld\n", max_abc);

    return 0;
}

