/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    014.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.07.01   9:45
 *-----------------------------------------------------------------------------
 * @Change:   2020.07.01
 *-----------------------------------------------------------------------------
*/

/*
 * 14.怎样存钱利最大
 * 假设银行整存整取存款不同期限的月息利率分别为：
 *         0.63%    期限 = 1年
 *         0.66%    期限 = 2年
 *         0.69%    期限 = 3年
 *         0.75%    期限 = 5年
 *         0.84%    期限 = 8年
 * 利息 = 本金 X 月息利率 X 12 X 存款年限。
 * 现在某人手中有2000元，请通过计算选择一种存钱方案，使得钱存入银行20年后得到的利息
 * 最多（假定银行对超过存款期限的那部分时间不付利息）
 */

#include <stdio.h>
#include <math.h>

int main(){
    int i8, i5, i3, i2, i1, n8, n5, n3, n2, n1;
    float max = 0, term;
    for (i8 = 0; i8<3; i8++){
        for (i5 = 0; i5<=(20-8*i8)/5; i5++){
            for (i3 = 0; i3<=(20-8*i8-5*i5)/3; i3++){
                for (i2 = 0; i2<=(20-8*i8-5*i5-3*i3)/2; i2++){
                    i1 = 20-8*i8-5*i5-3*i3 -2*i2;
                    term = 2000.0 * pow((double)(1+0.0063*12), (double)i1) *
                            pow((double)(1+2*0.0066*12), (double)i2) *
                            pow((double)(1+3*0.0069*12), (double)i3) *
                            pow((double)(1+5*0.0075*12), (double)i5) *
                            pow((double)(1+8*0.0084*12), (double)i8);
                }
                if (term > max){
                    max = term;
                    n1 = i1;
                    n2 = i2;
                    n3 = i3;
                    n5 = i5;
                    n8 = i8;
                }
            }
        }
    }
    printf("For maxinum profit, he should so have his money in a bank:\n");
    printf("  made fixed deposit for 8 year: %d times\n", n8);
    printf("  made fixed deposit for 5 year: %d times\n", n5);
    printf("  made fixed deposit for 3 year: %d times\n", n3);
    printf("  made fixed deposit for 2 year: %d times\n", n2);
    printf("  made fixed deposit for 1 year: %d times\n", n1);
    printf("                              Total: %.2f\n", max);
}

