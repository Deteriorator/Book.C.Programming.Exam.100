/*
 *
 *-----------------------------------------------------------------------------
 * @Name：    011.h
 * @Desc:     
 * @Author:   liangz.org@gmail.com
 * @Create:   2020.06.30   17:39
 *-----------------------------------------------------------------------------
 * @Change:   2020.06.30
 *-----------------------------------------------------------------------------
*/

/*
 * 11.打鱼还是晒网
 * 中国有句俗话叫“三天打鱼两天晒网”。某人从1990年1月1日期开始“三天打鱼两天晒网”，
 * 问这个人在以后的某一天中是在“打鱼”，还是在晒网。
 */

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int days(struct date day);

int main() {
    struct date today, term;
    int yearday, year, day;
    printf("Enter year/month/day: ");
    scanf("%d%d%d", &today.year, &today.month, &today.day);
    term.month = 12;
    term.day = 31;
    for (yearday = 0, year = 1990; year < today.year; year++) {
        term.year = year;
        yearday += days(term);
    }

    yearday += days(today);
    day = yearday % 5;
    if (day > 0 && day < 4)
        printf("He was fishing at the day.\n");
    else
        printf("He was sleeping at the day.\n");
}

int days(day)
        struct date day;
{
    static int day_tab[2][13] = {
            {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,},
            {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,},
    };
    int i, lp;
    lp = day.year % 4 == 0 && day.year % 100 != 0 || day.year % 400 == 0;
    for (i = 1; i < day.month; i++) {
        day.day += day_tab[lp][i];
    }
    return (day.day);
}

