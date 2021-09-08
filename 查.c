
void seek_WN()
{

    FILE* file1;
	file1 = fopen(path, "r"); 
    char line[1000]; //存每行
    char num[1000][20];    //存第二列字符串的值
    char name[1000][20];  // 存第三列 
    char str[1000][20];//存第五列 
	char b[20];
	int score[20];
	int tag=0;
	int tab=0;
	int d[20];
    int option;
    int i=0,size;
    char a[1000];
    char f[100];
    double result; //存第五列转化为double后的值
    while (fgets(line, sizeof(line), file1)) 
	{ //fgets逐行读取文件，到达文件尾终止while循环
        
		sscanf(line, "%*s %s %s %*s %s %*s %*s %*s %*s %*s", num[i],name[i],str[i]); //sscanf解析每行数据
		b[i]=atof(str[i]);
		if(b[i]==0) 
			b[i]=50;
		score[i]=b[i];
		if(b[i]!=0)
			d[i]=b[i];
		score[i]=d[i];
		i++;
	}
	size=i;
	
	menu_seek_YZH();
	gotoxy(47,24);	
	printf("请输入你想进行的操作：");
	scanf("%d",&option);
    if (option==1)
	{
	    system("cls");
		menu_seek_1_YZH();
		gotoxy(50,17);
		do
		{
		scanf("%s",&a);
		for(i=0;i<size;i++)
		{
		if(strcmp(a,num[i])==0)//查找
		{
			system("cls");
			menu_seek_4_YZH();
			gotoxy(50,15);
			printf("%s %s %d\n",num[i],name[i],score[i]);
		    tag=2;
	    }
    }
     if(tag==0)
     {
     system("cls");
     menu_seek_3_YZH();
     gotoxy(50,17);
 }
 }while(tag==0);

}
    if(option==2)
    {
    	system("cls");
    	menu_seek_2_YZH();
    	gotoxy(50,17);
    	do
    	{
		scanf("%s",&f);//按姓名查找
    	for(i=0;i<size;i++)
    	{
    		if(strcmp(f,name[i])==0)
    		{
    			system("cls");
    			menu_seek_4_YZH();
			    gotoxy(50,15);
    			printf("%s %s %d\n",num[i],name[i],score[i]);
			    tab=1;
			}
		}
	if(tab==0)
	{
	system("cls");
	menu_seek_3_YZH();
	gotoxy(50,17);
}
	}while(tab==0);
	
}
}