//Giridhar Kotwal 
//Class Department 
import java.util.Scanner; 
class Department{ 
String hodName; 
int totalStudents; 
double resultPercent,avg; 
Department() 
{ 
} 
void initialize(){ 
Scanner sc=new Scanner(System.in); 
System.out.println("Enter HOD name :- "); 
hodName=sc.nextLine(); 
System.out.println("Enter total students :- "); 
totalStudents=sc.nextInt(); 
System.out.println("Enter result percentage :- "); 
resultPercent=sc.nextDouble(); 
avg=resultPercent/totalStudents; 
} 
void display(){ 
System.out.println("HOD Name :- "+hodName); 
System.out.println("Total Students :- "+totalStudents); 
System.out.println("Result Percentage :- "+resultPercent); 
System.out.println("Average Per Student :- "+avg); 
} 
static void compareResult(Department d1,Department d2){ 
if(d1.avg>d2.avg) 
System.out.println(d1.hodName+" department has better result"); 
else if(d2.avg>d1.avg) 
System.out.println(d2.hodName+" department has better result"); 
else 
System.out.println("Both departments have equal result"); 
}} 