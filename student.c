#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#define MAXSTU 10
struct student list[MAXSTU];
int count=0;
int index, filecount;
FILE * pstus;
int size = sizeof(struct student);
void init(){
    if ((pstus = fopen("student.dat","a+b")) == NULL){
        fputs("无法打开student.dat文件\n",stderr);
        exit(1);
    }
    rewind(pstus);
    filecount=count;
    if(count==MAXSTU){
        fputs("存储已满",stderr);
        exit(2);
    }
}
void add(){
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
    while(count<MAXSTU&&fread(&list[count],size,1,pstus)==1){
        printf("%s\t\t%s\t%s\t\t%d\t\t%s\n",list[count].name,list[count].id,list[count].sex,list[count].age,list[count].phone);
        count++;
    }
};
void save(){};
void deletion(){};
void modify(){};
void query(){};
void quit(){
    fwrite(&list[filecount],size,count-filecount,pstus);
    fclose(pstus);
    puts("感谢使用本系统！再见~");
};
