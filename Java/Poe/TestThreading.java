class TestThreading{
public static void main(String args[]){
Threading t1 = new Threading("Five",5);
Threading t2 = new Threading("Six",6);
Threading t3 = new Threading("Seven",7);

t1.start();
t2.start();
t3.start();
}
}