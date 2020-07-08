/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    033.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.08   17:52
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.08
 *-----------------------------------------------------------------------------
*/

/*
 * 33.回文素数
 */

#include <stdio.h>

int a(int n);

int main() {
    int i, j, t, k, s;
    printf("Following are palindrome primes not greater than 1000:\n");
    for (i = 0; i <= 9; i++)
        for (j = 0; j <= 9; j++)
            for (k = 0; k <= 9; k++) {
                s = i * 100 + j * 10 + k;
                t = k * 100 + j * 10 + i;
                if (i == 0 && j == 0)
                    t /= 100;
                else if (i == 0)
                    t /= 10;
                if (s > 10 && s == t && a(s))
                    printf("%d\t", s);
            }
}

int a(n)
int n;
{
    int i;
    for (i = 2; i <= (n - 1) / 2; i++)
        if (n % i == 0)
            return (0);
    return (1);
}

