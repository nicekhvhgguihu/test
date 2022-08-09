#include"contakt.h"
int main()
{
	mnue();
	int input;
	struct contact info;
	initializing(&info);
	do
	{
		printf("可以开始选择》");	
		scanf("%d", &input);
		
		switch (input)
		{
		case add:
			add_info(&info);
			break;
		case del:
			del_info(&info);
			break;
		case search:
			search_info(&info);
			break;
		case modify:
			modify_info(&info);
			break;
		case show:
			show_info(&info);
			break;
		case sort:
			
			//sort_info(&info,sort_arr[search_option()]);
			break;
		case exit:
			printf("结束服务\n");
			break;
		default:
			printf("服务出现问题\n");
			break;
		}
	} while (input);
}
