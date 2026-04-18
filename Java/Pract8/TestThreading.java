class TestThreading
{
public static void main(String args[])
{
Threading t1 = new Threading("ONE");
Threading t2 = new Threading("TWO");
Threading t3 = new Threading("THREE");
t1.start();
t2.start();
t3.start();
}
}