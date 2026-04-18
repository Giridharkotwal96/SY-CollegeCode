/*Define  a  class  ‘Month’ having data members: name, total_days and 
total_holidays. Define appropriate methods to initialize and display the values 
of  these  data  members.  Input  values  for  two  objects  and  determine  which 
month is having maximum working days.*/
import java.util.Scanner;
public class Month {
    String name;
    int totalDays;
    int totalHolidays;
    void initialize()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the month :- ");
        name = sc.nextLine();
        System.out.println("Enter th total days in month :- ");
        totalDays = sc.nextInt();
        System.out.println("Enter the total holidays :- ");
        totalHolidays = sc.nextInt();
        sc.close();
    }
    void display()
    {
        System.out.println("The month is :- "+name);
        System.out.println("The total days are :- "+totalDays);
        System.out.println("The total holidays are :- "+totalHolidays);
    }
}
