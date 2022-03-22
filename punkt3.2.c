#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func(int sum,int proiz,int i)
{
  int s;
  printf("s[%d]=",(i+1));
  scanf("%d",&s);
  if (s%3==0)
    sum=sum+s;
  if (s%2==0)
    proiz=proiz*s;
  i++;
  if (i<10)
    func(sum,proiz,i);
  if (i>=10)
    printf("sum= %d,proiz= %d\n",sum,proiz);
}

int main()
{
  int i,sum,proiz;
  sum=0; proiz=1; i=0;
  func(sum,proiz,i);
  return 0;
}
