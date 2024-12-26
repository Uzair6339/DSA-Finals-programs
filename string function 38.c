# include<string.h>
void main()
{
	char arr[]="Bomboozled";
	int len1,len2;
	len1=xstrlen(arr);// user define function
	len2=xstrlen("Humpty Dumpty");
	printf("\n string =%s length=%d",arr,len1);
	printf("\n string =%s length =%d<Humpty Dumpty",len2);
}
xstrlen(char*s)
{
	int length=0;
	while(*s!="/0")
	{
	
	length++;
	s++;
}
return (length);
getch();
}
