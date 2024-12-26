class Gen<T>
{
T ob; // declare an object of type T
Gen(T O)
{
ob=O;
}
T getob()
{
return ob;
}
void showtype()
{
 System.out.println("Type of T is ",+ob.getclass().getName{});
}
}
class GenDemo
{
public static void main(String[]arg)
{
Gen<Integer> iob;
iob=new Gen<Integer>{88};
iob.showtype();
int v=iob.getob();
System.out.println("value :"+v);
System.out.println();
Gen<String>strob=new Gen<String>("Generics Test");
strob.showtype();
String str=strob.getob();
System.out.println("value:"+str);
}
}
