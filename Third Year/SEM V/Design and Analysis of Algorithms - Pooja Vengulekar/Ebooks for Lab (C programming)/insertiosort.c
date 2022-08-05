#include<stdio.h>
#include<stdlib.h>
#include<time.h>
                        //insertion sort using swapping ..you have to submit insertion sort without swapping
int *array;
unsigned n;
unsigned maxvalue;
void insertionsort();
void randominput();

int main()
{
    int i;
    printf("size of the array?: ");
    scanf("%u", &n);
    printf("whats the max value you want in array?:"); // in case you want array values to be limited to some value
    scanf("%u", &maxvalue);

    array=(int*)malloc(n*sizeof(int));
    if(array!=NULL)
    {
        randominput();
        insertionsort();
        for(printf("\n sorted array is\n"),i=0;i<n;i++)
            printf("%d ", array[i]);    
    }
    else
        printf("Memory allocation request failed\n");
    return printf("\n\n Program is ending successfully\n\n") & 0;
}

void randominput()
{
    int i;
        srand(time(0));
        if((maxvalue!=0)&&(maxvalue!=1))
            for(i=0;i<n;i++)
                array[i]=rand()%maxvalue;
        else
            for(i=0;i<n;i++)
                array[i]=rand();

        for(printf("\n input array is\n"),i=0;i<n;i++)
            printf("%d ", array[i]);    
}
void insertionsort()
{
    int i,j;
    for(i=1;i<n;i++)
        for(j=i-1;j>=0;j--)
            if(array[j]>array[j+1])  // swapping using XOR bitwise operator 
            {
                array[j]=array[j]^array[j+1];
                array[j+1]=array[j]^array[j+1];
                array[j]=array[j]^array[j+1];
            }
            else break;
}