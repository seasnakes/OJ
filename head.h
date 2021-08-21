extern  int max;//oj文档学生人数
extern  int n;//全部学生数
extern  int t;//oj实验数
#include<stdio.h>
#include <string.h>
#include<stdlib.h>

struct student {
	long num;       //学号     
	int sole;      //解决题数      
	int mark;      //分数
	int rank;      // 排名
	char name[50];  //姓名  
};


struct term{
	long num;
	char name[50];
	int score[30];


};


void input_zyh2(struct term s0[]);
void load_zyh(struct term s0[],struct student stu[]);
void out_zyh2(struct term s0[]);
