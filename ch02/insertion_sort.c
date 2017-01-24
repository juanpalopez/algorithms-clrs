#include <stdio.h>


void array_printer(int arr[]);

int main(void)
{
	int key;
	int my_array[6] = {5,2,4,6,1,3};
	int i,j, length;

	array_printer(my_array);

	for(j = 0, length = sizeof(my_array)/sizeof(int); j < length;j++)
	{
		i = j-1;
		key = my_array[j];

		//Insert my_array[j] into sorted sequence my_array[1..j-1]

		while(i > -1 && my_array[i] > key)
		{
			my_array[i+1] = my_array[i];
			i = i-1;
		}
		my_array[i+1] = key;
	}

	array_printer(my_array);

	return 0;
}

void array_printer(int arr[])
{
	for(int i = 0; i < 6; i++)
	{
		printf("%i ",arr[i]);
	}
	printf("\n");
}
