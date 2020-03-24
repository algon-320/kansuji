#include <stdio.h>
#include "kansuji.h"

int main(void) {
  printf("百 二 十 三 => %lld\n", KANSUJI(百 二 十 三));
  printf("十 億 七 => %lld\n", KANSUJI(十 億 七));
  printf("百 二 十 三 + 五 = ");
  kansuji_print(KANSUJI(百 二 十 三) + KANSUJI(五));
  printf("\n");
  return 0;
}

