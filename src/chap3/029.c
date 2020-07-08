/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    029.c
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.08   9:35
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.08
 *-----------------------------------------------------------------------------
*/

/*
 * 29.求具有abcd=(ab+cd)^2性质的四位数
 */

#include <stdio.h>

int main(){
    int n, a, b;
    printf("There are following numbers with 4 digits satisfied condition:\n");
    for(n=1000; n<10000; n++){
        a=n/100;
        b=n%100;
        if((a+b)*(a+b)==n)
            printf(" %d", n);
    }
}

