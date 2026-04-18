class TableDemo extends Thread
{
int num;
static Object lock = new Object();
TableDemo(String name, int num)
{
super.setName(name);
this.num = num;
}
public void run()
{
synchronized(lock)
{
System.out.println("Executing Thread :- "+getName());
for(int i=1;i<=10;i++)
System.out.println(i*num);
}
}
}