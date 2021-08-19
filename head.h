extern  int max;//oj文档学生人数
extern  int n;//全部学生数
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

struct infor {
	long num;            
	char name[50];       
};

void input_zyh(struct student stu[60],struct infor s1[50]);
void mod_zyh(struct student stu[60]);
void  comp_czl(struct student stu[60],struct infor s1[50]);
void  bubble_sort(struct student stu[60],int n);
void outp_zyh(struct student stu[60]);