/*Define a class ‘Salary’ which will contain data members basic, TA, DA, HRA.
Write a program using constructors which will initialize these values for
object. Calculate total salary of the employee using the method. */
import java.util.Scanner;
public class Salary {
    int basic, TA, DA, HRA, total;
    Salary(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the basic salary :- ");
        basic = sc.nextInt();
        System.out.println("Enter the TA amount :- ");
        TA = sc.nextInt();
        System.out.println("Enter the DA amount :- ");
        DA = sc.nextInt();
        System.out.println("Enter the HRA amount :- ");
        HRA = sc.nextInt();
    }
    void totalSalary(){
        total = basic+TA+DA+HRA;
        System.out.println("The total salary is :- "+total);
    }    
}
