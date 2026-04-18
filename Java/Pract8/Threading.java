class Threading extends Thread
{
Threading(String name)
{
super.setName(name);
}
public void run()
{
System.out.println("Executing Thread :- "+getName());
for(int i=1;i<=10;i++)
System.out.println(i);
}
}