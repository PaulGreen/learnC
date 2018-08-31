/*
 * 显示牌面点数的脑残程序
 * 使用“XXXX许可证”
 * 2018-8-29
 */
#include"stdio.h"
#include"stdlib.h"
int main()
{
    char card_name[3];
    puts("输入牌名：");
    scanf("%2s", card_name);
    int val = 0;
    switch(card_name[0]){
        case 'J':
        case 'Q':
        case 'K':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(card_name);
    }
    /* 检查牌的点数是否在3到6之间 */
    if (val >= 3 && val <= 6){
        puts("计数增加");
    }
    /* 否则，检查牌是否是10，J，Q */
    else if(val == 10){
        puts("计数减少");
    }
    return 0;
}
