#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#define NAME_MAX 15
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 20
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;
//ͨѶ¼�ṹ��
typedef struct Contact
{
	PeoInfo data[1000]; //�����ʵ���ݵĿռ�
	int sz; //��¼��Ч���ݵĸ���
}Contact;


void InitContact(Contact * pcon);
void AddContact(Contact *pcon);