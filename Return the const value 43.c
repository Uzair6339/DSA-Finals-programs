#include<stdio.h>
void main()
{
 const char *fun();
 const char *p;
 p=fun();
 
 printf("\n %s",p);
}
const char *fun()
{
  return "Rain";
}