#include<stdio.h>
#include<stdlib.h>


struct  node{
	int  a;
	struct  node*  next;

}NODE;
struct node *p1, *p2, *head = NULL;

void  add(int n)
{
	p1->next = p2; p1 = p2; p1->a = n; p1->next = NULL;
}

void print()
{
	printf("%d\n", p2->a); p2 = p2->next;
}

void delet()
{
	p2 = head;
	head = head->next;
	free(p2);
}

int  main()
{
	
	int  m, n;


	scanf_s("%d", &n);
	head = (struct node *)malloc(sizeof(struct node));
	p1 = head; 
	head->a = n;
	m = 1;

	while (1)
	{
		scanf_s("%d", &n);
		p2 = (struct  node*)malloc(sizeof(struct node));
		
			if (n >= 0)
		{
		
			add(n);
			m++;
		}
		else  break;
	}

	p2 = head;

	do
	{
		print();
	} while (p2 != NULL);



	for (; head != NULL;)
	{
		delet();

	}
	return 0;
}