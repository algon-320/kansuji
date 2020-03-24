#include <stdio.h>
#include "kansuji.h"

#include <assert.h>
int run_tests(void)
{
    assert(KANSUJI(五) == 5ll);
    assert(KANSUJI(十 五) == 15ll);
    assert(KANSUJI(五 十) == 50ll);
    assert(KANSUJI(五 万 八 百 十 五) == 50815ll);
    assert(KANSUJI(百 二 十 三) == 123ll);
    assert(KANSUJI(千 三) == 1003ll);

    assert(KANSUJI(一 万) == 10000ll);
    assert(KANSUJI(一 万 三) == 10003ll);
    assert(KANSUJI(一 万 百) == 10100ll);
    assert(KANSUJI(一 万 千 百 十 一) == 11111ll);

    assert(KANSUJI(百 二 十 三 万) == 1230000ll);
    assert(KANSUJI(五 億 六 千 万) == 560000000ll);
    assert(KANSUJI(五 千 万) == 50000000);
    assert(KANSUJI(四 万 三) == 40003);
    assert(KANSUJI(十 万 三) == 100003);
    assert(KANSUJI(百 四 万 三) == 1040003ll);
    assert(KANSUJI(百 億 五) == 10000000005ll);
    assert(KANSUJI(一 兆) == 1000000000000ll);
    assert(KANSUJI(一 兆 一) == 1000000000001ll);

    assert(KANSUJI(一 億 二 千 三 百 四 十 五 万 六 千 七 百 八 十 九) == 123456789ll);
    
    /* auto generated tests */
    #include "kansuji_test.c"
    return 0;
}

int main(void)
{
    run_tests();
    printf("all tests passed!\n");
    return 0;
}
