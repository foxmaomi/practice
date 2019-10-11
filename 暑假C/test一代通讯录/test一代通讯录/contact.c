#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void InitContact(Contact * pcon)
{
	pcon->sz =0;
	memset(pcon->data, 0, sizeof(pcon->data));
}

void AddContact(Contact *pcon)
{
	assert(pcon != NULL);
	
}