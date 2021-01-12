#include<stdio.h>
#include<stdlib.h>

int main()
{
    for(int i=0; i<1; i++)
    {
    int *p;
    p = (int*)malloc(sizeof(int)); 
    printf("Random Number : %d\n",p);
    }
    return 0;
}