#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12

#define MAX 1000

#define DEFAULT_SZ 3

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

//typedef struct Contact
//{
//	int sz;//��Ч��Ϣ�ĸ���
//	struct PeoInfo data[MAX];//����˵���Ϣ
//}Contact, *pContact;

typedef struct Contact
{
	int sz;//��Ч��Ϣ�ĸ���
	int capacity;//��ǰͨѶ¼��������
	struct PeoInfo data[0];//����˵���Ϣ
}Contact, *pContact;

//pContact=== Contact* == struct Contact*

pContact InitContact(pContact pcon);
pContact AddContact(struct Contact* pcon);
void ShowContact(struct Contact* pcon);
void DelContact(pContact pcon);
void SeachContact(pContact pcon);
void ModifyContact(pContact pcon);
void SortContact(pContact pcon);
void DestroyContact(pContact pcon);
void SaveContact(pContact pcon);
pContact LoadContact(pContact pcon);
