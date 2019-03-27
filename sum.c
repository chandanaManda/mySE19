//author : Sai Chandana Manda
//program Description:Program to write about the sum 
#include<stdio.h>
int main()
{
  int i,num,sum=0; //initialising the values 
  printf("please enter the value of number :\n"); //enter the number 
  scanf("%d",&num);//read the value
  printf(" the value of number is :%d \n",num);
  for(i= 1;i <=num;i++)
    sum +=i; //writing the logic  
  printf("the sum of number from 1 to num = %d is sum = %d \n",num,sum);
  return 0;
}//end of main 
