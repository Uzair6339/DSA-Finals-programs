import java.util.*;
class ArrayListDemo
{
public static void main(String []arg)
{
ArrayList<String> al= new ArrayList<String>();
System.out.println("Initial size of al:",+al.size);
al.add("C");
al.add("A");
al.add("E");
al.add("B");
al.add("D");
al.add("F");
al.add(1,"A2");
System.out.println("Size of al after addition:"+al.size);
System.out.println("contents of al:",+al);
al.remove("F");
al. remove(2);
System.out.println("Size of al after addition:",+al.size());
System.out.println("Content of al:",+al);
}
}