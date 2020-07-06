/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    023.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.06   9:43
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.06
 *-----------------------------------------------------------------------------
*/

/*
 * 23.由两个平方三位数获得三个平方二位数
 */


#include <math.h>
#include <stdio.h>

int main() {
    void f();
    int i, t;
    float a[3], b[3];
    printf("The possible perfect squares combinations are:\n");
    for (i = 11; i <= 31; i++)
        for (t = 11; t <= 31; t++) {
            f(i * i, a);
            f(t * t, b);
            if (sqrt(a[0] * 10 + b[0]) == (int) sqrt(a[0] * 10 + b[0])
                && sqrt(a[1] * 10 + b[1]) == (int) sqrt(a[1] * 10 + b[1])
                && sqrt(a[2] * 10 + b[2]) == (int) sqrt(a[2] * 10 + b[2]))
                printf(" %d and %d\n", i * i, t * t);
        }
}


void f(n, s)
        int n; float *s;
{
    int k;
    for (k = 1000; k >= 10; s++) {
        *s = (n % k) / (k / 10);
        k /= 10;
    }
}
