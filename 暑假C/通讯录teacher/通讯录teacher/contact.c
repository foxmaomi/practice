#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"


pContact CheckCapacity(pContact pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//����
		pContact ptr = (pContact)realloc(pcon, sizeof(Contact)+(pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
			pcon = ptr;

		pcon->capacity += 2;
		printf("���ݳɹ�\n");
	}
	return pcon;
}


pContact LoadContact(pContact pcon)
{
	//���ļ�
	FILE* pfRead = fopen("contact.dat", "rb");
	PeoInfo tmp = { 0 };
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return NULL;
	}
	//���ļ�
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		//����
		pcon = CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}
	//�ر��ļ�
	fclose(pfRead);
	pfRead = NULL;
	return pcon;
}

pContact InitContact(pContact pcon)
{
	pcon->sz = 0;
	pcon->capacity = DEFAULT_SZ;
	memset(pcon->data, 0, pcon->capacity*sizeof(PeoInfo));
	//�����ļ����е�ͨѶ¼��Ϣ
	pcon = LoadContact(pcon);
	return pcon;
}

void SaveContact(pContact pcon)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	int i = 0;
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//д����
	for (i = 0; i<pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfWrite);
	}
	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
}

void DestroyContact(pContact pcon)
{
	//�����ļ�
	SaveContact(pcon);
	free(pcon);
	pcon = NULL;
	printf("����ͨѶ¼\n");
}

pContact AddContact(struct Contact* pcon)
{
	//����
	pcon = CheckCapacity(pcon);
	//¼��Ϣ
	printf("����������:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("����������:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("������绰:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("��ӳɹ�\n");
	return pcon;
}

void ShowContact(struct Contact* pcon)
{
	int i = 0;
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i<pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

static int FindPeoByName(pContact pcon, char name[NAME_MAX])
{
	int i = 0;
	for (i = 0; i<pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//�Ҳ���
	return -1;
}

void DelContact(pContact pcon)
{
	int ret = 0;
	char name[NAME_MAX] = { 0 };
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ�����ɾ��\n");
		return;
	}
	printf("������Ҫɾ��������:>");
	scanf("%s", name);
	//��������������
	ret = FindPeoByName(pcon, name);
	if (-1 == ret)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ��
		int i = 0;
		for (i = ret; i<pcon->sz - 1; i++)
		{
			pcon->data[i] = pcon->data[i + 1];
		}
		pcon->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void SeachContact(pContact pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	pos = FindPeoByName(pcon, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name,
			pcon->data[pos].age,
			pcon->data[pos].sex,
			pcon->data[pos].tele,
			pcon->data[pos].addr);
	}
}

void ModifyContact(pContact pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	pos = FindPeoByName(pcon, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		//¼��Ϣ
		printf("����������:>");
		scanf("%s", pcon->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pcon->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pcon->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pcon->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pcon->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

//void qsort( void *base, 
//	size_t num, 
//	size_t width, 
//	int ( *compare )(const void *elem1, const void *elem2 ) );



int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

int cmp_by_age(const void* e1, const void* e2)
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}


void SortContact(pContact pcon)
{
	qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_age);
	printf("����ɹ�\n");
}