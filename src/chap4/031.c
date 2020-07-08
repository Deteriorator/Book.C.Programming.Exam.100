/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    031.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.08   9:50
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.08
 *-----------------------------------------------------------------------------
*/

/*
 * 31.歌德巴赫猜想
 */

#include <stdio.h>
#include <math.h>

int fflag(int i);

int main() {
    int i, n;
    for (i = 4; i <= 2000; i += 2) {
        for (n = 2; n < i; n++)
            if (fflag(n))
                if (fflag(n - 1)) {
                    printf("%d=%d+%d\n", i, n, i - n);
                    break;
                }
        if (n == i)
            printf("error %d\n", i);
    }
}

int fflag(i)
        int i;
{
    int j;
    if (i <= 1)
        return (0);
    if (i == 2)
        return (1);
    if (!(i % 2))
        return (0);
    for (j = 3; j <= (int) (sqrt((double) i) + 1); j += 2)
        if (!(i % j))
            return (0);
    return (1);
}

