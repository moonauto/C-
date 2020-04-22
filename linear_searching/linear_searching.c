#include<stdio.h>

char a[]="hello world";

int index_of(char letter)
{
	int i = 0;
	while (a[i]!='\0')
	{
		if (a[i] == letter)
			return i;
		 else i++;
	}
	return -1;
}

int main(void)
{
	printf ("%d\t%d\n",index_of('o'),index_of('z'));
	return 0;
}
