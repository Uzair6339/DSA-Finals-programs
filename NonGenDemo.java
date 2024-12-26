class NonGen
{
object ob;
NonGen(object o)
ob=o;
}
object getob()
{
return ob;
}
void showtype()
{
 System.out.println("Type of ob is ",+ob.getclass().getName());
}
}
class NonGenDemo
{
 public static void main(String []arg)
{
NonGen iob;
iob=new NonGen(88);
iob.showtype();
int v=(Integer) iob.getob();
System.out.println("Value:",+v);
System.out.println();
NonGen strob=new NonGen("Non-Genericss test");
strob.showtype();
String str=(String) Strob.getob();
System.out.println("Value:",+str);
iob=strob;
v=(integer) iob.getob();
}
}