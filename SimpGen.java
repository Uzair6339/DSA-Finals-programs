class TwoGen<T,V>
 T ob1;
V ob2;
TwoGen(T o1,vo2)
{
ob1=o1;
ob2=o2;
}
void showtype()
{
System.out.println("Type of T is",+ob1.getclass().getName());
System.out.println("Type of V is:".ob2.getclass().getName());
}
T getob1()
{
return ob1;
}
V getob2()
{
return ob2;
}
}
class SimpGen
{
 public static void main(String[] arg)
{
TwoGen<Integer,String>tgobj=new TwoGen<Integer,String>(88,"Generics");
tgobj.showtype();
int v=tgobj.getob1();
System.out.println("Value:"+v);
String str=tgobj.getob2();
System.out.println("Value:"+str):
}
}