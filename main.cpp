#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

int main()
{
	SListNode* a=NULL;
	int i,x,j;

	scanf("%d", &i);
	for (i; i > 0; i--)
	{
		printf("«Î ‰»Î:");
		scanf("%d", &x);
		//SListPushFront(&a,x);
		SListPushBack(&a, x);
	}
	SListPrint(a);

	return 0;
}