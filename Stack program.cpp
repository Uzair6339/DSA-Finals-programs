#include<stdio.h>
int stack[5],n=5,top=-1;
//adding an element to stack
void push(int val)
{
	if(top>=n-1)
	{
	printf("Stacvk is full\n");
	}
	else{
	top++;
	stack[top]=val;	
	}
}
void pop()
