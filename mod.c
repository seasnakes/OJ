#include "head.h"

void input_zyh(struct term s0[])
{
	printf("请输入包含所有学生信息的文档\n");
	char path[200];
	gets(path);
	FILE *fp = fopen(path, "r");
	if (fp == NULL)
		puts("error");
	while (fscanf(fp, "%ld %s", &s0[n].num, s0[n].name) != EOF)
	{
		n++;
	}
	fclose(fp);
}

void load_zyh(struct term s0[], struct student stu[])
{

	int i, j, k = 0;
	printf("请输入本学期OJ实验个数\n");
	scanf("%d", &t);
	fflush(stdin); //清除标准输入设备（一般是键盘）的缓存
	for (i = 0; i < t; i++)
	{
		max = 0;
		printf("请输入第%d次OJ实验成绩文档的路径\n", i + 1);
		char path[200];
		gets(path); //读取路径
		FILE *fp = fopen(path, "r");
		if (fp == NULL)
		{
			puts("error");
		}
		while (fscanf(fp, "%d %ld %s %d %d", &stu[max].rank, &stu[max].num, stu[max].name, &stu[max].sole, &stu[max].mark) != EOF)
		{
			max++;
		}

		int w;					  //检索全错学生数量
		for (w = 0; w < max; w++) //调整分值
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
		system("clear");
	}
}
void final_score_zyh(struct term s0[])
{
	int b; //第几个学生
	int k; //第几次oj实验
	int p[20] = {0};
	for (b = 0; b < t; b++)
	{
		printf("请输入第%d次OJ实验占总期末总评比例（%%）\n", b + 1);
		scanf("%d", &p[b]);
	}
	for (b = 0; b < n; b++)
	{
		for (k = 0; k < t; k++)
		{
			s0[b].finalScore += s0[b].score[k] * p[k] * 0.01;
		}
	}
}
void average_zyh(struct term s0[])
{
	int b; //第几个学生

	for (b = 0; b < n; b++)
	{
		average += s0[b].finalScore / n;
	}
}
void out_zyh(struct term s0[])
{
	int i, m;
	FILE *fp = fopen("output.txt", "w");
	int j = 0;
	fprintf(fp, "%-13s\t%-3s\t", "学号", "姓名");
	for (j = 0; j < t; j++)
	{
		fprintf(fp, "第%d次oj实验成绩\t", j + 1);
	}
	fprintf(fp, "总成绩\n");
	for (i = 0; i < n; i++)
	{

		fprintf(fp, "%ld\t%-3s\t", s0[i].num, s0[i].name);
		for (m = 0; m < t; m++)
		{
			fprintf(fp, "%-12d\t", s0[i].score[m]);
		}
		fprintf(fp, "%.0f\n", s0[i].finalScore);
	}
	fprintf(fp, "全部学生的总评平均分为%.2f分\n", average);
	fclose(fp);
}
void find_cmy(struct term s0[])
{
	int i, p;
	int a = 0;
	long findnum;
	char name[100];
	char c;
	do
	{

		printf("请选择你想要查询方式\n");
		printf("输入1 以学号方式查询\n");
		printf("输入2 以姓名方式查询\n");
		scanf("%d", &p);
		switch (p)
		{
		case 1:
			printf("请输入要查询学生的学号:");
			scanf("%ld", &findnum);

			for (i = 0; i < n; i++)
			{
				if (findnum - s0[i].num == 0)
				{
					printf("学号:");
					printf("%ld\n", s0[i].num);
					printf("姓名:");
					printf("%s\n", s0[i].name);
					printf("总评得分");
					printf("%.0f\n", s0[i].finalScore);
					a = 1;
					break;
				}
			}
			if (a == 0)
			{
				printf("没有该学生学号!!!\n");
			}

			
			break;

		case 2:
			printf("请输入要查询学生的姓名:\n");
			scanf("%s", name);
			for (i = 0; i < n; i++)
			{
				if (strcmp(name, s0[i].name) == 0)
				{

					printf("学号:");
					printf("%ld\n", s0[i].num);
					printf("姓名:");
					printf("%s\n", s0[i].name);
					printf("总评得分");
					printf("%.0f\n", s0[i].finalScore);
					a = 1;
					break;
				}
			}
			if (a == 0)
			{
				printf("没有该学生学号!!!\n");
			}

			break;
		}
		fflush(stdin); //清除标准输入设备（一般是键盘）的缓存
		printf("是否继续查询？y/n\n");
		scanf("%c",&c);

	} while (c!='n');
}
