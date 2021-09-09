#include"head.h"
int max=0;//oj文档学生人数
int n=0;//全部学生数
int t=0;
double average=0;
int main(void){
    system("clear");
    char s;//用于检测是否需要查询学生成绩
    struct term s0[50]={0};
    struct student stu[50];
    printf("*******欢迎来到oj成绩管理系统**********\n");
	input_zyh(s0);
    load_zyh(s0,stu);
    final_score_zyh(s0);
    average_zyh(s0);
    out_zyh(s0);
    system("clear");
    printf("汇总已完成，请在output.txt中查看。\n");
    printf("是否需要查询学生成绩？ 输入y以继续，否则将结束程序\n");
    scanf("%c",&s);
    if(s=='y'){
    find_zyh(s0);
    }
    return 0;
}