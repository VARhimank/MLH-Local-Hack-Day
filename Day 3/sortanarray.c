#include <stdio.h> 

void sort(int arr[], int n) 
{   int temp=0;
    for (int i=0; i<n; i++) {     
        {for (int j = i+1; j<n; j++) 
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[i];    
                    arr[i] = arr[j];    
                    arr[j] = temp;  
                }
           }
        }
    }
}

void pf_ar(int arr[], int size) 
{ 
    int i; 
    for (i=0;i<size;i++) 
    {printf("%d ",arr[i]);}
    printf("\n");
} 

int main() 
{ 
    int arr[100]; 
    printf("Enter size of array [less than 100] : ");
    int n=0; scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Original array:\n"); 
    pf_ar(arr,n);
    sort(arr,n); 
    printf("Sorted array in ascending order:\n"); 
    pf_ar(arr, n); 
    return 0; 
}