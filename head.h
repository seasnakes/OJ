extern  int max;//oj文档学生人数
extern  int n;//全部学生数
extern  int t;//oj实验数
extern  double average;//总评平均分
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
	char name[50]; //姓名
	int score[30];//按照实验先后顺序依次储存各个学生所有oj实验成绩
	double finalScore;//期末总评

	


};


void input_zyh(struct term s0[]);
void load_zyh(struct term s0[],struct student stu[]);
void final_score_zyh(struct term s0[]);
void average_zyh(struct term s0[]);
void out_zyh(struct term s0[]);

