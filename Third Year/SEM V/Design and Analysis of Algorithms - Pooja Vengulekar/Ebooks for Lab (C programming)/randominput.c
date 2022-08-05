#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>

int * array;
unsigned n;

int main()
{
    int i;

    printf("size of int=%u maximum unsigned value on this ssytem=%u \n", sizeof(int), ~0);
    printf("What is the size of the array?: ");
    scanf("%u", &n);

    printf("\n \t trying to allocate %.0f bytes\n", ((float)n)*sizeof(int));
    array= (int*) malloc(n*sizeof(int));
    printf("array pointer is pointing to %p address of heap\n", (void *)array);

    if(array!=NULL)
    {
        srand(time(0));
        for(i=0;i<n;i++)
            array[i]= rand();  //0... maximum random allowed   

        for(printf("\n\t"),i=0;i<n;i++)
            printf("%d ",array[i]);  //0... maximum random allowed    
    }
    else
        printf("\t\t memory allocation failed \n\n");

    return printf("\n reached the end \n") & 0;
}