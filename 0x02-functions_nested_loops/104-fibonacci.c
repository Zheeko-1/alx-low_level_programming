#include <stdio.h>
/**
 *main - Entry
 *
 *Return: 0
 *
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int atf1;
	unsigned long int atf2;

	printf("%lu", bef);
	for (i = 1; i < 91; i++)
	{
		printf(",%lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	bef1 = (bef / l;
	bef1 = (bef % l);
	aft1 = (bef / l);
	aft2 = (bef % l);

	for (i = 92; 1 < 99; ++i)
	{
		printf(",%lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l;
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf('\n');
	return (0);

}