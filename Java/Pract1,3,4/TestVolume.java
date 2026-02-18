import java.util.Scanner;
class TestVolume{ 
public static void main(String args[]){ 
Scanner sc = new Scanner(System.in); 
int side, radius, height; 
Volume v = new Volume(); 
int choice; 
do{ 
System.out.print("\n1.Cube\n2.Cone\n3.Cylinder\n4.Sphere\n5.Exit"); 
System.out.println("\nEnter the choice :- "); 
choice = sc.nextInt(); 
switch(choice){ 
case 1: v.findVolume(1); 
break; 
case 2: v.findVolume(1,2); 
break; 
case 3: v.findVolume(1,1); 
break; 
case 4: v.findVolume(1); 
break; 
case 5: System.out.println("Exit"); 
} 
}while(choice!=5); 
}}