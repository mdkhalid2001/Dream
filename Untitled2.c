#include<stdio.h>
int main(){
int array[100],search,n,i;
printf("Enter the Number of elements in array\n");
scanf("%d",&n);
printf("Enter %d integer(s)\n",n);
for(i=0;i<n;i++)
    scanf("%d",&array[i]);
 printf("Enter a number to search\n");
 scanf("%d",&search);
for(i=0;i<n;i++)
{
    if(array[i]==search)
    {
        printf("%d is present at index %d.\n",search,i);
        break;
    }
}

if(i==n)
    printf("%d isn't present in the array.\n,search");
return 0;
}



