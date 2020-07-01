/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    013.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.01   9:38
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.01
 *-----------------------------------------------------------------------------
*/

/*
 * 13.该存多少钱
 * 假设银行一年整存零取的月息为0.63%。现在某人手中有一笔钱，他打算在今后的五年中每
 * 年的年底取出1000元。到第五年时刚好取完，请算出他存钱时应存入多少。
 */

#include <stdio.h>

int main(){
    int i;
    float total=0;
    for(i=0;i<5; i++){
        total = (total + 1000.)/(1+.0063*12);
    }
    printf("He must save %.2f at first.\n", total);
}

