#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("%d 8",n+8);
  }
  else printf("%d 9",n+9);
}