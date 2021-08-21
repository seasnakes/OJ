#include"head.h"
int max=0;//oj文档学生人数
int n=0;//全部学生数
int t=0;
int main(void){
    struct term s0[50]={0};
    struct student stu[50];
	
    input_zyh2(s0);
    load_zyh(s0,stu);
    out_zyh2(s0);
    
   
    
   

   
    return 0;
}