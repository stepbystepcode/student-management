#ifndef STUDENT_MANAGEMENT_STUDENT_H
#define STUDENT_MANAGEMENT_STUDENT_H
#define STARS "**********************************"
struct student{
    char name[51];
    char id[13];
    char sex[2];
    int age;
    char phone[12];
};
int menu(void);
int menu5(void);
int menu6(void);
void init(void);
void add(void);
void display(void);
void save(void);
void deletion(void);
void modify(void);
void query(void);
void queryX(char,char *);
void quit(void);
#endif //STUDENT_MANAGEMENT_STUDENT_H
