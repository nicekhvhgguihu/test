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
	const char* option[max_digit] = { "����","����","�Ա�","��ͥ��ַ","�绰����"};
	printf("\n������������Ҫ��������ķ�ʽ(eg�Ա�)��");
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
	printf("��ʼ�����\n");
}
void add_info(struct contact* info)
{
	if (info->size == max_date)
	{
		printf("�����Ѿ���\n");
	}
	else
	{
		printf("\n������������");
		scanf("%s",info->date[info->size].name);
		printf("\n���������䡷");
		scanf("%d",&(info->date[info->size].age));
		printf("\n�������Ա�");
		scanf("%s", info->date[info->size].sex);
		printf("\n�������ͥ��ַ��");
		scanf("%s", info->date[info->size].adress);
		printf("\n������绰���롷");
		scanf("%s", info->date[info->size].telphone);
	}
	if (info->date[info->size].age == 0)
	{
		printf("�������,����������չʾ�ô�����Ϣ\n");
	}
	info->size++;
}
void del_info(struct contact* info)//δ��ɵ�ɾ������
{
	char a[max_name];
	printf("\n������ɾ��Ŀ������֡�");
	scanf("%s",a);
	int i;
	for (i = 0; i < info->size; i++)
	{
		if (0 == strcmp(info->date[i].name, a))
		{
			info->date[i].age = 0;//ֱ���ǵ���������Ϣ����������չʾ����
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
			printf("û�д�������\n");
		}
		else
		{
			if (i == 0)
			{
				printf("%-15s\t%-2s\t%-5s\t%-5s\t%-11s\n", "����", "����", "�Ա�", "��ַ", "�绰����");
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
	char a[max_name];//������������Ϊ������Ϣ
	printf("\n���������(���߸ı�)�����֡�");
	scanf("%s",a);
	int i,count=1;
	for (i = 0; i < info->size; i++)
	{
		if (info->date[i].age != 0&&strcmp(info->date[i].name,a)==0)
		{
			printf("ͨѶ¼λ��Ϊ%d\n",count);
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
		printf("���޴���\n");
		return -1;
	}
}
void modify_info(struct contact* info)
{
	int ret = search_info(info);
	if ( ret== -1)
	{
		printf("û�и�����\n");
	}
	else
	{
		printf("\n����������Ŀ��������Ϣ");
		mc s = {0};
		printf("\n������");
		scanf("%s",s.date.name);
		printf("\n���䡷");
		scanf("%d",&(s.date.age));
		printf("\n�Ա�");
		scanf("%s", s.date.sex);
		printf("\n��ͥ��ַ��");
		scanf("%s", s.date.adress);
		printf("\n�绰���롷");
		scanf("%s", s.date.telphone);
		memcpy(&(info->date[ret]), &(s.date),sizeof(s.date));
		printf("\n�޸����\n");

	}

}
void sort_info(struct contact* info, int (*p)(struct contact*))
{
	sc a = { 0 };

}