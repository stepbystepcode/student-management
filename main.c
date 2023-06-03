#include <stdio.h>
#include "student.h"
#define QUIT 7
int main(void) {
    puts("欢迎使用学生信息管理系统！");
    init();
    int code;
    while ((code = menu()) != QUIT) {
        switch (code) {
            case 1:
                add();
                break;
            case 2:
                display();
                break;
            case 3:
                save();
                break;
            case 4:
                deletion();
                break;
            case 5:
                modify();
                break;
            case 6:
                query();
                break;
            default:
                puts("error.");
        }
    }
    quit();
    return 0;
}
int menu(void){
    printf("%s%s\n",STARS,STARS);
    int code,status;
    puts("（1）学生基本信息录入 \n（2）学生基本信息显示\n（3）学生基本信息保存\n（4）学生基本信息删除\n（5）学生基本信息修改\n（6）学生基本信息查询\n（7）退出系统\n请输入数字选择: ");
    printf("%s%s\n",STARS,STARS);
    while((status=scanf("%d",&code))!=1||(code<1||code>7)){
        if(status!=1) scanf("%*s");
        puts("请输入1-7之间的一个数字");
    }
    return code;
}
