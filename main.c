#include"head.h"
int max=0;//oj文档学生人数
int n=0;//全部学生数
int t=0;
double average=0;
int main(void){
    struct term s0[50]={0};
    struct student stu[50];
	input_zyh(s0);
    load_zyh(s0,stu);
    final_score_zyh(s0);
    average_zyh(s0);
    out_zyh(s0);
    system("clear");
    printf("汇总已完成，请在output.txt中查看。");
    find_cmy(s0);
    return 0;
}