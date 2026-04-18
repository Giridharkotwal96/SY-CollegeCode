/*Define  a  class  ‘Passport’  having  data  members:  name,  nationality  and 
passport_number.  Define  appropriate  methods  to  initialize  and  display  the 
values of these data members. Input values for three objects and display it. */
import java.util.Scanner;
public class Passport {
    String name;
    String nationality;
    int passportNumber;
    void initialize()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the the name of person :- ");
        name = sc.nextLine();
        System.out.println("Enter the nationality of that person :- ");
        nationality = sc.nextLine();
        System.out.println("Enter the passport number :- ");
        passportNumber = sc.nextInt();
    }
    void display()
    {
        System.out.println("The name of the person is :- "+name);
        System.out.println("The nationality of the person is :- "+nationality);
        System.out.println("The passport number is :- "+passportNumber);
    }
}
