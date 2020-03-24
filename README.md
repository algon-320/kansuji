# 漢数字 in C

Cプログラム中で漢数字を書くためのマクロ

clangや最新のGCCでしか動きません(おそらく)

## Example

[Wandboxで試す](https://wandbox.org/permlink/fOZeKbfdwieFdOkp)

```c
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
```

実行結果
```
百 二 十 三 => 123
十 億 七 => 1000000007
百 二 十 三 + 五 = 百二十八
```
