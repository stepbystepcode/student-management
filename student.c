#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#define MAXSTU 10
struct student list[MAXSTU];
int count=0;
int filecount;
FILE * pstus;
int size = sizeof(struct student);
void init(){
    if ((pstus = fopen("student.txt","a+")) == NULL){
        fputs("无法打开student.txt文件\n",stderr);
        exit(1);
    }
    rewind(pstus);
    filecount=count;
    if(count==MAXSTU){
        fputs("存储已满",stderr);
        exit(2);
    }
    while(count<MAXSTU&&fread(&list[count],size,1,pstus)==1){
        filecount++;
        count++;
    }
}
void add(){
    if (count == MAXSTU) {
        puts("存储已满");
        return;
    }
    puts("请输入新增学生姓名: ");
    scanf("%s",list[count].name);
    puts("请输入新增学生学号: ");
    scanf("%s",list[count].id);
    puts("请输入新增学生性别: ");
    scanf("%s",list[count].sex);
    puts("请输入新增学生年龄: ");
    scanf("%d",&list[count].age);
    puts("请输入新增学生电话: ");
    scanf("%s",list[count].phone);
    count++;
    printf("filecount:%d,count:%d",filecount,count);
};
void display(){
    printf("%s\t\t%s\t\t\t%s\t%s\t%s\n","姓名","学号","性别","年龄","电话");
    for (int i = 0; i < count; i++) {
        printf("%s\t\t%s\t%s\t\t%d\t\t%s\n",list[i].name,list[i].id,list[i].sex,list[i].age,list[i].phone);
    }
}
void save(){
    if (filecount == count) {
        puts("没有新增学生信息需要保存");
        return;
    }
    fseek(pstus, 0, SEEK_END);
    fwrite(&list[filecount], size, count - filecount, pstus);
    filecount = count;
    puts("已保存新增学生信息");
};
void deletion(){
    int i, j;
    char id[13];
    puts("请输入要删除的学生学号: ");
    scanf("%s", id);
    for (i = 0; i < count; i++) {
        if (strcmp(list[i].id, id) == 0) {
            for (j = i; j < count - 1; j++) {
                list[j] = list[j + 1];
            }
            count--;
            printf("已删除学号为 %s 的学生信息\n", id);
            return;
        }
    }
    printf("未找到学号为 %s 的学生信息\n", id);
};
void modify(){
    int i;
    char id[13];
    puts("请输入要修改的学生学号: ");
    scanf("%s", id);
    for (i = 0; i < count; i++) {
        if (strcmp(list[i].id, id) == 0) {
            switch (menu5()) {
                case 1:
                    puts("请输入修改后的学生姓名: ");
                    scanf("%s", list[i].name);
                    break;
                case 2:
                    puts("请输入修改后的学生学号: ");
                    scanf("%s", list[i].id);
                    break;
                case 3:
                    puts("请输入修改后的学生性别: ");
                    scanf("%s", list[i].sex);
                    break;
                case 4:
                    puts("请输入修改后的学生年龄: ");
                    scanf("%d", &list[i].age);
                    break;
                case 5:
                    puts("请输入修改后的学生电话: ");
                    scanf("%s", list[i].phone);
                    break;
                default:
                    puts("error.");
            }
            printf("已修改学号为 %s 的学生信息\n", id);
            return;
        }
    }
    printf("未找到学号为 %s 的学生信息\n", id);
};
void query(){
        switch (menu6()) {
            case 1:
                queryX('N', "姓名");
                break;
            case 2:
                queryX('I', "学号");
                break;
            case 3:
                queryX('P', "电话");
                break;
            default:
                puts("error.");
        }
};
void queryX(char type, char *field){
    int i,found=0;
    char value[13];
    puts("请输入要查询的学生");
    printf("%s: ", field);
    scanf("%s", value);
    printf("%s\t\t%s\t\t\t%s\t%s\t%s\n","姓名","学号","性别","年龄","电话");
    for (i = 0; i < count; i++) {
        if (type == 'N' && strcmp(list[i].name, value) == 0) found=1;
        else if (type == 'I' && strcmp(list[i].id, value) == 0) found=1;
        else if (type == 'P' && strcmp(list[i].phone, value) == 0) found=1;
    }
    if (found)
        printf("%s\t\t%s\t%s\t\t%d\t\t%s\n",list[i].name,list[i].id,list[i].sex,list[i].age,list[i].phone);
    else
        printf("未找到%s为 %s 的学生信息\n", field, value);
}
int menu6(void){
    printf("%s%s\n",STARS,STARS);
    int code,status;
    puts("（1）按姓名查询\n（2）按学号查询\n（3）按电话查询");
    printf("%s%s\n",STARS,STARS);
    while((status=scanf("%d",&code))!=1||(code<1||code>3)){
        if(status!=1) scanf("%*s");
        puts("请输入1-3之间的一个数字");
    }
    return code;
}
int menu5(void){
    printf("%s%s\n",STARS,STARS);
    int code,status;
    puts("请输入要修改的信息: ");
    puts("（1）姓名\t（2）学号\n（3）性别\t（4）年龄\n（5）电话");
    printf("%s%s\n",STARS,STARS);
    while((status=scanf("%d",&code))!=1||(code<1||code>5)){
        if(status!=1) scanf("%*s");
        puts("请输入1-5之间的一个数字");
    }
    return code;
}
void quit(){
    fclose(pstus);
    puts("感谢使用本系统！再见~");
};
