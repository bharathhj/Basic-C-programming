#include<stdio.h>

void main()
{
int n,digit,rev=0,temp;

printf("Enter the digit:");
scanf("%d",&n);

temp=n;

while(n!=0)
{
  digit=n%10;
  rev=rev*10+digit;
  n=n/10;
 }
 
 printf("The given digit is:%d\n",temp);
 printf("The reverse of the given number is:%d\n",rev);
 
 if(rev==temp)
  {
    printf("It is a Palindrome");
   }
else
  printf("It is not a palindrome");
  
 }
