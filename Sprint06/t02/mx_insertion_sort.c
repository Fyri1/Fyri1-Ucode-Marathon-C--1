
#include <stdio.h>
int mx_strcmp(const char *s1, const char *s2);

int mx_insertion_sort(char**arr, int size)
{
    int i;
    int j;
    char* x;
	for( i=0; i < size; i++)
	{// i - номер прохода
		for( j = size-1; j > i; j-- )
		{
			if (mx_strcmp(arr[j-1],arr[j]) > 0)
			{
				x=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=x;
			}
		}
	}
	return i-1;


}
