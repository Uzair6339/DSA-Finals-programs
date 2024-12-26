import java.util.*;
class ArrayListToArray
{
public staic void main(String []arg)
{
ArrayList<Integer> al=new ArrayList<Integer>();
al.add(1);
al.add(2);
al.add(3);
al.add(4);
System.out.println("Content of al:" +al);
Integer ia[]=new Integer[al.size()];
ia=al.toArray(ia);
int sum=0;
for(int i:al) sum+=1;
System.out.println("Sum is :+sum);
}
}