/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    010.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.06.30   17:28
 *-----------------------------------------------------------------------------
 * @Change:   2020.06.30
 *-----------------------------------------------------------------------------
*/
/*
 * 10.数制转换
 * 将任一整数转换为二进制形式
 */


#include <stdio.h>

int printb(int x, int n);


int main(){
    int x;
    printf("Input Number: ");
    scanf("%d", &x);
    printf("number of decimal form: %d\n", x);
    printf("    it's binary form: ");
    printb(x, sizeof(int) * 8);
    putchar('\n');
}

int printb(x, n) int x, n;
{
    if(n>0){
        putchar('0' + ((unsigned)(x&(1<<(n-1)))>>(n-1)));
        printb(x, n-1);
    }
}

