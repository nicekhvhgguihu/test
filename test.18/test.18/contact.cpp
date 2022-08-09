#include"contakt.h"
void mnue()
{
	printf("*******1.add       2.del   *********\n");
	printf("*******3.search    4.modify*********\n");
	printf("*******5.show      6.sort  *********\n");
	printf("*******0.exit      *****************\n");
	printf("************************************\n");

}
int search_option()
{
	char search_option[max_digit];
	const char* option[max_digit] = { "姓名","年龄","性别","家庭地址","电话号码"};
	printf("\n请输入你所需要按照排序的方式(eg性别)》");
	scanf("%s",search_option);
	int i = 0;
	while (strcmp(search_option, option[i]))
	{
		i++;
	}
	return i;

}
void initializing(struct contact* info)
{
	info->size = 0;
	memset(info->date,0,sizeof(info->date));
	printf("初始化完成\n");
}
void add_info(struct contact* info)
{
	if (info->size == max_date)
	{
		printf("数据已经满\n");
	}
	else
	{
		printf("\n请输入姓名》");
		scanf("%s",info->date[info->size].name);
		printf("\n请输入年龄》");
		scanf("%d",&(info->date[info->size].age));
		printf("\n请输入性别》");
		scanf("%s", info->date[info->size].sex);
		printf("\n请输入家庭地址》");
		scanf("%s", info->date[info->size].adress);
		printf("\n请输入电话号码》");
		scanf("%s", info->date[info->size].telphone);
	}
	if (info->date[info->size].age == 0)
	{
		printf("年龄出错,后续将不在展示该错误信息\n");
	}
	info->size++;
}
void del_info(struct contact* info)//未完成的删除函数
{
	char a[max_name];
	printf("\n请输入删除目标的名字》");
	scanf("%s",a);
	int i;
	for (i = 0; i < info->size; i++)
	{
		if (0 == strcmp(info->date[i].name, a))
		{
			info->date[i].age = 0;//直接是当作错误信息，后续将不展示出来
		}
	}

	
}
void show_info(struct contact* info)
{
	int i;
	for (i = 0; i < info->size; i++)
	{

		if (info->size == 0)
		{
			printf("没有储存数据\n");
		}
		else
		{
			if (i == 0)
			{
				printf("%-15s\t%-2s\t%-5s\t%-5s\t%-11s\n", "名字", "年龄", "性别", "地址", "电话号码");
			}

			if (info->date[i].age != 0)
			{
				printf("%-15s\t%-2d\t%-5s\t%-5s\t%-11s\n",
					info->date[i].name,
					info->date[i].age,
					info->date[i].sex,
					info->date[i].adress,
					info->date[i].telphone
				);
			}
		}
	}
}
int search_info(struct contact* info)
{
	char a[max_name];//都是以名字作为检索信息
	printf("\n请输入查找(或者改变)的名字》");
	scanf("%s",a);
	int i,count=1;
	for (i = 0; i < info->size; i++)
	{
		if (info->date[i].age != 0&&strcmp(info->date[i].name,a)==0)
		{
			printf("通讯录位置为%d\n",count);
			return i;
		}
		else if (info->date[i].age == 0)
		{
			count--;
		}
		count++;
	}
	if (i == info->size)
	{
		printf("查无此人\n");
		return -1;
	}
}
void modify_info(struct contact* info)
{
	int ret = search_info(info);
	if ( ret== -1)
	{
		printf("没有该人物\n");
	}
	else
	{
		printf("\n请重新输入目标对象的信息");
		mc s = {0};
		printf("\n姓名》");
		scanf("%s",s.date.name);
		printf("\n年龄》");
		scanf("%d",&(s.date.age));
		printf("\n性别》");
		scanf("%s", s.date.sex);
		printf("\n家庭地址》");
		scanf("%s", s.date.adress);
		printf("\n电话号码》");
		scanf("%s", s.date.telphone);
		memcpy(&(info->date[ret]), &(s.date),sizeof(s.date));
		printf("\n修改完毕\n");

	}

}
void sort_info(struct contact* info, int (*p)(struct contact*))
{
	sc a = { 0 };

}