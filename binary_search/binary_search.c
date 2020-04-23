#include <stdio.h>

#define LEN 8
int a[LEN] = { 1, 3, 3, 3, 4, 5, 8, 9 };

int binary_search(int value)
{
	int mid,start = 0,end = LEN-1;
	while(start <= end)
	{
		mid = (end+start)/2;
		if (value > a[mid])
			start = mid + 1;
		else if (value < a[mid])
			end = mid - 1;
		else return mid;
	}
	return -1;
}

int main(void)

{
	int i ;
	scanf ("%d",&i);
	printf("%d\n",binary_search(i));
	return 0;
}
