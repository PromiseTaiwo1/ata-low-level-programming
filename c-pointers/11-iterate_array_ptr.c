#include <stdio.h>

int main(void)
{
    int norm_arr[5] = {5, 10, 15, 20, 25};
    int *ptr = norm_arr;   // Points to the first element
    int i;
				       
    for (i = 0; i < 5; i++)
    {
	printf("Element %d (Value: %d, Address: %p)\n",
		i, *ptr, (void *)ptr);
	ptr++;  // Move to the next element
    }
				      
    return 0;
}
