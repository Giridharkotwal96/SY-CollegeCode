class TestDepartment{ 
public static void main(String args[]){ 
Department d1=new Department(); 
Department d2=new Department(); 
System.out.println("Enter details for Department 1"); 
d1.initialize(); 
System.out.println("Enter details for Department 2"); 
d2.initialize(); 
d1.display(); 
d2.display(); 
Department.compareResult(d1,d2); 
}} 