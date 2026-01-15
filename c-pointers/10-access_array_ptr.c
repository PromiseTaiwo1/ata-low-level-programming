#include <stdio.h>

int main(void)
{
    int norm_arr[3] = {10, 20, 30};
    int *ptr = norm_arr;  // Points to the first element of the array
				     
    printf("Array elements: [%d, %d, %d]\n",
    norm_arr[0], norm_arr[1], norm_arr[2]);
				      
    printf("Accessing element 0 using array index: %d\n", norm_arr[0]);
    printf("Accessing element 0 using pointer arithmetic: %d\n", *(ptr + 0));
				     
    printf("Accessing element 1 using array index: %d\n", norm_arr[1]);
    printf("Accessing element 1 using pointer arithmetic: %d\n", *(ptr + 1));
				      
    printf("Accessing element 2 using array index: %d\n", norm_arr[2]);
    printf("Accessing element 2 using pointer arithmetic: %d\n", *(ptr + 2));
				     
    return 0;
}
