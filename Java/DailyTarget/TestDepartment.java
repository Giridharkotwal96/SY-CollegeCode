import java.util.*;
class TestDepartment {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Input for Department 1
        System.out.println("Enter details for Department 1:");
        System.out.print("HOD Name: ");
        String name1 = sc.nextLine();
        System.out.print("Total Students: ");
        int students1 = sc.nextInt();
        System.out.print("Result Percentage: ");
        double result1 = sc.nextDouble();
        sc.nextLine(); // clear buffer

        Department d1 = new Department(name1, students1, result1);

        // Input for Department 2
        System.out.println("\nEnter details for Department 2:");
        System.out.print("HOD Name: ");
        String name2 = sc.nextLine();
        System.out.print("Total Students: ");
        int students2 = sc.nextInt();
        System.out.print("Result Percentage: ");
        double result2 = sc.nextDouble();

        Department d2 = new Department(name2, students2, result2);

        // Display both
        System.out.println("\nDepartment Details:");
        d1.display();
        d2.display();

        // Compare results
        if (d1.per_of_result < d2.per_of_result) {
            System.out.println("Department 1 (HOD: " + d1.name_of_hod + ") has worse result.");
        } 
        else if (d2.per_of_result < d1.per_of_result) {
            System.out.println("Department 2 (HOD: " + d2.name_of_hod + ") has worse result.");
        } 
        else {
            System.out.println("Both departments have equal results.");
        }
    }
}