#include<stdio.h>
void main()
{
  char str1[]="Nagpui";
  char str2[10];
  xstrcpy(str2,str1);
  printf("\n%s",str2);
}
xstrcpy(char*t,char*s)
{
  while(*t!='\0')
{
 *t=*s;
 t++;
 s++;
}
*t='\0';
}