#include <stdio.h>
/*********************
    创建链表 island
**********************/
typedef struct island{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;
/*****************
    打印链表内容
******************/
void display(island *start){
    island *i = start;  //i 代表链表项目

    for (;i != NULL; i = i->next){   //只有链表不为空，才将链表的内容打印出来
        printf("Name: %s\nOpen: %s-%s\n", i->name, i->opens, i->closes);
    }

}

int main(){
    island amity = {"Amity", "09:00", "17:00", NULL};   //初始化链表
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
    island skull = {"Skull", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};

    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &skull;
    skull.next = &shutter;

    display(&amity);    //传递链表起始地址
}
