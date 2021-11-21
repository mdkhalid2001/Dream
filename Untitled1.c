#include<stdio.h>
int main(){
int i,Numberofelement,Elementtofind;
printf("Enter the Number of Array we want:\n");
scanf("%d",Numberofelement);
int array[Numberofelement];
printf("Enter%d elements value:\n",Numberofelement);
for(i=0;i<Numberofelement;i++)
{
    scanf("%d",&array[i]);
}
 printf("Your array is : \n");
for(i=0;i<Numberofelement;i++)
{
    printf("%d",array[i]);
}
printf("\n");
printf("Which element you want to find? :\n");
scanf("%d", &Elementtofind);
for(i=0;i<Numberofelement;i++)
{
    if(Elementtofind=array[i])
        printf("your element %d is found on index %d",Elementtofind,i);
}







}
