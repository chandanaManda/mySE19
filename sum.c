//author : Sai Chandana Manda
//program Description:Program to write about the sum 
#include<stdio.h>
int main()
{
  int i,num,sum=0,count; //initialising the values
  float average;
  printf("please enter the value of number :\n"); //enter the number 
  scanf("%d",&num);//read the value
  printf(" the value of number is :%d \n",num);
  for(i= 1;i <=num;i++)
    sum +=i; //writing the logic
  count = i;
  printf("the sum of number from 1 to num = %d is sum = %d \n",num,sum);
  printf(" the average of numbers is : %f \n" ,sum/count);
  return 0;
}//end of main 
