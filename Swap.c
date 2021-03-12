#include<stdio.h>

int main()
{
    int p,q;
    printf("Enter the value of p:");
    scanf("%d",&p);
    printf("Enter the value of q:");
    scanf("%d",&q);
    
      p=p+q;
      q=p-q;
      p=p-q;
    
    printf("after the swapping : p=%d\t q=%d\n",p,q);

}
