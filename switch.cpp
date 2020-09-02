#include<stdio.h>
main()
{
	int a;
	printf("enter your order");
	scanf("%d",&a);
	switch(a)
	{
		case 1 :
			printf("FOOD ITEM : pizza\nPRICE : Rs 239");
			break;
			
		case 2 :
			printf("FOOD ITEM : burger\nPRICE : Rs 129");
			break;
		case 3	:
			printf("FOOD ITEM : pasta\nPRICE : Rs 179");
			break;
		case 4:
			printf("FOOD ITEM : french fries\nPRICE : Rs 99");
			break;
		case 5:
			printf("FOOD ITEM : sandwich\nPRICE : Rs 149");
			break;
		default : printf("invalid choice");
	}
	return 0;
}
