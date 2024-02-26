/*Write a program in C to display n terms of natural numbers and their sum. 
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Numbers upto 7 terms : 28*/

#include<stdio.h>
int main()
{
  
    int n,i,sum;
    printf("Enter a number:");scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%2d",i);
        sum=sum+i;
    }
    printf("The sum of natural number from 1 upto %d terms: %d",n,sum);
return 1;
}