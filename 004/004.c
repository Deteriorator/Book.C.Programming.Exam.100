/*
 *"""
 *-----------------------------------------------------------------------------
 * @Name：    004.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.06.20   17:51
 *-----------------------------------------------------------------------------
 * @Change:   2020.06.20
 *-----------------------------------------------------------------------------
*/

/*
 * 在歌星大奖赛中，有10个评委为参赛的选手打分，分数为1到100。
 * 选手最后得分为：去掉一个最高分和一个最低分后其余8个分数的平均值。
 */

#include <stdio.h>


void main(){
    int integer, i, max, min, sum;
    max = -32768;
    min = 32767;
    sum = 0;
    for (i = 1; i <= 10; i++) {
        printf("Input number %d=", i);
        scanf("%d", &integer);
        sum += integer;
        if(integer>max)
            max = integer;
        if(integer<min)
            min = integer;
    }
    printf("Canceled max score: %d\nCanceled min score:%d\n", max, min);
    printf(" Average score: %d\n", (sum-max-min)/8);
}