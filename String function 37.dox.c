 #include<string.h>
 void main()
 {
 	char str1[20]="Bamboozled";
 	char str2[]="Champ";
 	char str3[20];
 	int i,k;
 	 i=strlen(str1);
 	 printf("\n lenght of string =%d",i);
 	 strcpy(str3,str1);
 	 printf("\nAfter copying string str3=%s",str3);
 	 k=strcmp(str1,str2);
 	 printf("\n comparing str1 and str2 K=%d",k);
 	 strcat(str1,str2);
 	 printf("\nconcatenation str1=%s",str1);
 	 getch();
 }