#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// void func()
// {
//   int i,max,min;
//   if (s[i]>max)
//     max=s[i];
//   if (s[i]<min)
//     min=s[i];
//   while(i<10)
//   {
//     func();
//   }
//   i++;
// }

int main()
{
  int s[10];
  int i,max,min;
  for (i=0;i<10;i++)
  {
    printf("s[%d]=",i);
    scanf("%d",&s[i]);
  }
  printf("Вывод массива\n");
  max=0; min=100000;
  for (i=0;i<10;i++)
  {
    if (s[i]>max)
      max=s[i];
    if (s[i]<min)
      min=s[i];
    //printf("s[%d]=%d\n",i,s[i]);
  }
  printf("max= %d, min= %d\n",max,min);
  //func();

}
