//Giridhar Kotwal 
//Distance travelled 
import java.util.Scanner; 
class Distance{ 
double u,a,t,dist; 
void initialize(){ 
Scanner sc=new Scanner(System.in); 
System.out.println("Enter initial velocity :- "); 
u=sc.nextDouble(); 
System.out.println("Enter acceleration :- "); 
a=sc.nextDouble(); 
} 
void display(){ 
for(t=1;t<=10;t++){ 
dist=u*t+0.5*a*t*t; 
System.out.println("Time = "+t+" Distance = "+dist); 
}}} 
