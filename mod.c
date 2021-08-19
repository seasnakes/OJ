#include"head.h"
void input_zyh(struct student stu[60],struct infor s1[50])//文件导入
{		printf("请输入OJ实验成绩文档\n");
		char path[200];
		gets(path);
		FILE *fp=fopen(path,"r"); 
			if (fp==NULL)
				{
					puts("error");
					
				}
			while(fscanf(fp,"%d %ld %s %d %d",&stu[max].rank,&stu[max].num,stu[max].name,&stu[max].sole,&stu[max].mark)!=EOF)
			        {		
			          max++;
					  
					  }
			 
		fclose(fp);

		printf("请输入包含所有学生信息的文档\n");
		char path1[200];
		gets(path1);
		fp=fopen(path1,"r");
		if (fp==NULL)
		puts("error");
		while(fscanf(fp,"%d %s",&s1[n].num,s1[n].name)!=EOF)
            {
                n++; 
            }
	    fclose(fp);
        
		
}

void mod_zyh(struct student stu[60])//调整全错学生成绩
{int t;//检索全错学生变量
	for(t=0;t<max;t++){
	
	if(stu[t].mark==0){
		stu[t].mark=50;
		}
}

}

void  comp_czl(struct student stu[60],struct infor s1[50])
{
	int i,j,a,t;
	char c[50];
	for (i = 0; i < n; i++)
	{
		a = 0;
		for (j = 0; j < max; j++)
		{
			if (s1[i].num == stu[j].num)
				a++;
		}
		if (a == 0)
		{
			stu[max].num = s1[i].num;
			stu[max].sole =0;
			stu[max].mark = 0;
			stu[max].rank = max + 1;
			strcpy(stu[max].name, s1[i].name);
			max++;
		}
	}
}
void  bubble_sort(struct student stu[60],int n)
{   int times;
    int i;
    int temp;
    for(times=0;times<n-1;times++)
    {   for(i=0;i<n-1-times;i++)
        {
            if(stu[i].num>stu[i+1].num)
            {
                struct student t={};
                t=stu[i];
                stu[i]=stu[i+1];
                stu[i+1]=t;


            }
        }

    }

}

void outp_zyh(struct student stu[60])
{int i;
	FILE *fp1=fopen("output.txt","w");
	 for(i=0;i<(max);i++){
		fprintf(fp1,"%d\t%s\t%ld\t%d\t%d\n",stu[i].rank,stu[i].name,stu[i].num,stu[i].mark,stu[i].sole);
    	
	}
	fclose(fp1);
}