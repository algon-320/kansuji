#pragma once

#define 一 * 0 + 1ll + 0
#define 二 * 0 + 2ll + 0
#define 三 * 0 + 3ll + 0
#define 四 * 0 + 4ll + 0
#define 五 * 0 + 5ll + 0
#define 六 * 0 + 6ll + 0
#define 七 * 0 + 7ll + 0
#define 八 * 0 + 8ll + 0
#define 九 * 0 + 9ll + 0
#define 十 ) * 10ll + (1ll
#define 百 ) * 100ll + (1ll
#define 千 ) * 1000ll + (1ll
#define 万 * 0)) * 10000ll + ((1ll
#define 億 * 0)) * 100000000ll + ((1ll
#define 兆 * 0)) * 1000000000000ll + ((1ll
#define 京 * 0)) * 10000000000000000ll + ((1ll
#define KANSUJI(ex) ((1ll ex * 0))

void kansuji_print(long long x)
{
    static const char *kansuji_chars[] = {
        "一", "二", "三", "四", "五", "六", "七", "八", "九", "", "十", "百", "千", "", "万", "億", "兆", "京"};
    long long pw1 = 10000000000000000ll, idx1 = 4;
    while (pw1)
    {
        long long part = x / pw1, pw2 = 1000, idx2 = 3;
        while (part)
        {
            long long dig = part / pw2;
            if (dig)
            {
                if (pw2 == 1 || dig > 1)
                {
                    printf("%s", kansuji_chars[dig - 1]);
                }
                printf("%s", kansuji_chars[9 + idx2]);
            }
            part %= pw2, pw2 /= 10, idx2--;
        }
        if (x / pw1)
        {
            printf("%s", kansuji_chars[13 + idx1]);
        }
        x %= pw1, pw1 /= 10000, idx1--;
    }
}
