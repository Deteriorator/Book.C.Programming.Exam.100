/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    030.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.08   9:40
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.08
 *-----------------------------------------------------------------------------
*/

/*
 * 030.求素数
 */

#include <stdio.h>

int main() {
    int n1, nm, i, j, flag, count = 0;
    do {
        printf("Input START and END=?");
        scanf("%d%d", &n1, &nm);
    } while (!(n1 > 0 && n1 < nm));
    printf("--------------------PRIME TABLE(%d - %d)------------1--------\n", n1, nm);
    if (n1 == 1 || n1 == 2) {
        printf("%4d", 2);
        n1 = 3;
        count++;
    }
    for (i = n1; i <= nm; i++) {
        if (!(i % 2))continue;
        for (flag = 1, j = 3; flag && j < i / 2; j += 2)
            if (!(i % j))
                flag = 0;
        if (flag)
            printf(++count % 15 ? "%4d" : "%4d\n", i);
    }
}
