#include<stdio.h>
int main()
{
    int arr[100];
    int i,n;

    printf("Enter number of array elements upto 100 : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Elements -  %d  :",i );
        scanf("%d",&arr[i]);

    }
    printf("\n The values store into the array are : \n");
    for(i=0;i<n;i++)
    {
        printf("  %d  ",arr[i]);
    }
     printf("\n The values store into the array in reverse  are : \n");
    for(i=n-1;i>=0;i--)
    {
        printf("  %d  ",arr[i]);
    }
    getch();
}
