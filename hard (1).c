#include <stdio.h>
void main()
{
int a,b,c,p;
 // printf("Enter a marks:");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  a=a+b+c;
  p=a+b;
  if(a>=190)
  {
      printf("eligible for admission");
  }
  else if(p>=140)
  {
      printf("eligible for admission");
  }
  else
  {
      printf("not eligible for admission ");
  }
}

