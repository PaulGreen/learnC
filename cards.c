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
    if (card_name[0] == 'K'){
        val = 10;
    }else if (card_name[0] == 'Q'){
        val=10;
    }else if (card_name[0] == 'J'){
        val = 10;
    }else if (card_name[0] == 'A'){
        val = 11;
    }else{
        val = atoi(card_name);
    }
    //printf("这张牌的点数是：%i\n", val);
    /* 检查牌的点数是否在3到6之间 */
    if (card_name >= 3 && card_name <= 6){
        puts("计数增加");
    }
    /* 否则，检查牌是否是10，J，Q */
    else if{
        puts("计数减少");
    }
    return 0;
}
