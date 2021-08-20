#include"head.h"
int max=0;//oj文档学生人数
int n=0;//全部学生数

int main(void){

    struct student stu[50];
	struct infor s1[50];
    input_zyh(stu,s1);
    mod_zyh(stu);
    
    comp_czl(stu,s1);
    
    bubble_sort(stu,n);

    outp_zyh(stu);
    return 0;
}