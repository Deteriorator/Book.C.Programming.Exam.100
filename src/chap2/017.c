/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    017.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.02   9:37
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.02
 *-----------------------------------------------------------------------------
*/

/*
 * 17.平分七筐鱼
 */

#include <stdio.h>

int a[3][3], count;

int main() {
    int i, j, k, m, n, flag;
    printf("It exist possible distribution plans:\n");
    for (i = 0; i <= 3; i++) {
        a[0][0] = i;
        for (j = i; j <= 7 - i && j <= 3; j++) {
            a[1][0] = j;
            if ((a[2][0] = 7 - j - a[0][0]) > 3)continue;
            if (a[2][0] < a[1][0]) break;
            for (k = 1; k <= 5; k += 2) {
                a[0][1] = k;
                for (m = 1; m < 7 - k; m += 2) {
                    a[1][1] = m;
                    a[2][1] = 7 - k - m;
                    for (flag = 1, n = 0; flag && n < 3; n++)
                        if (a[n][0] + a[n][1] < 7 && a[n][0] * 2 + a[n][1] == 7)
                            a[n][2] = 7 - a[n][0] - a[n][1];
                        else
                            flag = 0;
                    if (flag) {
                        printf("  No.%d   Full basket    Semi-basket    Empty\n", ++count);
                        for (n = 0; n < 3; n++)
                            printf("Fisher %c:      %d            %d           %d\n", 'A' + n, a[n][0], a[n][1],
                                   a[n][2]);
                    }
                }
            }
        }
    }
}


