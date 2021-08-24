#include"head.h"

void input_zyh2(struct term s0[])
{
	printf("请输入包含所有学生信息的文档\n");
		char path[200];
		gets(path);
		FILE *fp=fopen(path,"r");
		if (fp==NULL)
		puts("error");
		while(fscanf(fp,"%ld %s",&s0[n].num,s0[n].name)!=EOF)
            {
                n++; 
               // printf("%d\n",n);
            }
	    fclose(fp);
        
}

void load_zyh(struct term s0[], struct student stu[])
{
	
	int i,j, k = 0;
	printf("请输入本学期OJ实验总数\n");
	scanf("%d", &t);
	getchar();
	for (i = 0; i < t; i++)
	{
		max=0;
		printf("请输入第%d次OJ实验成绩文档的路径\n", i+1);
		char path[200];
		gets(path);					//读取路径
		FILE *fp = fopen(path, "r");
		if (fp == NULL)
		{
			puts("error");
		}
		while (fscanf(fp, "%d %ld %s %d %d", &stu[max].rank, &stu[max].num, stu[max].name, &stu[max].sole, &stu[max].mark) != EOF)
		{
			max++;
		}

		int w; //检索全错学生数量
		for (w = 0; w < max; w++)  //调整分值
		{

			if (stu[w].mark == 0)
			{
				stu[w].mark = 50;
			}
		}

		for (j = 0; j < max; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (stu[j].num == s0[k].num)
				{
					s0[k].score[i] = stu[j].mark;
					break;
				}

			}
		}
		fclose(fp);
	}
}

void out_zyh2(struct term s0[]){
	int i, m;
	FILE *fp = fopen("output.txt", "w");
	
		for (i = 0; i < n; i++)
		{
			fprintf(fp, "%ld\t", s0[i].num);
			for(m=0;m<t;m++){
			fprintf(fp, "%d\t", s0[i].score[m]);	
			}
			fprintf(fp, "\n");
		}
	
	fclose(fp);
}
