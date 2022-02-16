//
//  main.c
//  Thirteen-Commandments_9
//
//  Created by HyperLee on 2022/2/16.
//  https://www.ptt.cc/bbs/C_and_CPP/M.1465304337.A.9F2.html
//  Item 9-5 慎用macro(#define) , 在 Macro 定義中, 務必為它的參數個別加上括號
//  #define SQUARE(x)    (x * x) ==> 導致 預處理後變成SQUARE(10-5*10-5)  => 結果是 -45

#include <stdio.h>
#include <stdlib.h>
#define SQUARE(x)    ((x) * (x))

int main(int argc, const char * argv[]) {
    printf("%d\n", SQUARE(10-5));
    
    return 0;
}
