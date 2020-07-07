/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    026.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.07   9:48
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.07
 *-----------------------------------------------------------------------------
*/

/*
 * 26.亲密数
 */


#include <stdio.h>

int main() {
    int a, i, b, n;
    printf("There are following friendly-numbers pair smaller than 3000:\n");
    for (a = 1; a < 3000; a++) {
        for (b = 0, i = 1; i <= a / 2; i++)
            if (!(a % i))
                b += i;
        for (n = 0, i = 1; i <= b / 2; i++)
            if (!(b % i))
                n += i;
        if (n == a && a < b)
            printf("    %4d..%4d", a, b);
    }
}
