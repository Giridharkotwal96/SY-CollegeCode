import java.util.*;

class Department {
    String name_of_hod;
    int total_students;
    double per_of_result;

    // Default constructor
    Department() {
    }

    // Parameterized constructor
    Department(String name, int students, double result) {
        name_of_hod = name;
        total_students = students;
        per_of_result = result;
    }

    // Method to display details
    void display() {
        System.out.println("HOD Name: " + name_of_hod);
        System.out.println("Total Students: " + total_students);
        System.out.println("Result Percentage: " + per_of_result);
        System.out.println("--------------------------");
    }
}