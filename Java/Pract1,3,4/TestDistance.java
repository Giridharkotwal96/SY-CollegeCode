class TestDistance{ 
public static void main(String args[]){ 
Scanner sc=new Scanner(System.in); 
char ch; 
do{ 
Distance d=new Distance(); 
d.initialize(); 
d.display(); 
System.out.println("Do you want to repeat (y/n) ?"); 
ch=sc.next().charAt(0); 
}while(ch=='y'||ch=='Y'); 
}} 