#pragma once
#include<stdio.h>
#include<string.h>
void mnue();
void initializing(struct contact* info);
void add_info(struct contact* info);
void del_info(struct contact* info);
void show_info(struct contact* info);
int search_info(struct contact* info);
void modify_info(struct contact* info);
void sort_info(struct contact* info ,int (*p)(struct contact *));
int search_option();
int sort_name(struct contact* info);
int sort_age(struct contact* info);
int sort_sex(struct contact* info);
int sort_adress(struct contact* info);
int sort_telephone(struct contact* info);


#define max_name 20
#define max_sex 5
#define max_adress 20
#define max_telphone 20
#define max_date 1000
#define max_digit 5
struct peoinfo
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char adress[max_adress];
	char telphone[max_telphone];
	

};
struct contact
{
	struct peoinfo date[max_date];
	int size;
};
enum option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort,

};
typedef struct modify_contact
{
	struct peoinfo date;

}mc;
typedef struct sort_contact
{
	struct peoinfo date;
}sc;

//int(*sort_arr[max_digit])(struct contact *) = {sort_name,sort_age,sort_sex,sort_adress,sort_telephone};