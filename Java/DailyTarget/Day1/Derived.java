class Derived extends Base{
int c;
Derived(int a, int b, int c){
super(a,b);
this.c=c;
}
void dispMax(){
int max = a;
if(b>a)
max = b;
if(c>a)
max = c;
System.out.println("The max number is :- "+max);
}
void dispMin(){
int min = a;
if(b<a)
min = b;
if(c<a)
min = c;
System.out.println("The min number is :- "+min);
}
void equality()
{
if(a==b||b==c||a==c)
System.out.println("Two numbers are euqal");
else
System.out.println("All numbers are different");
}
}