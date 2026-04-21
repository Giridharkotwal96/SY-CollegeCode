/*
Create three threads having name Five, Six & Seven which are child threads of
TableDemoThread. These three threads will display table of 5, 6 & 7. Assign the
priority to each child thread.
*/

class Threading extends Thread{
static Object lock = new Object();
int num;
Threading(String name, int num){
super.setName(name);
this.num=num;
}
public void run(){
synchronized(lock){
System.out.println("Executing thread :- "+getName());
for(int i=1;i<=10;i++)
System.out.println(i*num);
}
}
}