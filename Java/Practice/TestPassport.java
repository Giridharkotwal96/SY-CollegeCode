public class TestPassport {
    public static void main(String[] args) {
        Passport p1 = new Passport();
        Passport p2 = new Passport();
        Passport p3 = new Passport();
        System.out.println("Enter the 1st person info for passport");
        p1.initialize();
        System.out.println("Enter the 2nd person info for passport");
        p2.initialize();
        System.out.println("Enter the 3rd person info for passport");
        p3.initialize();

        p1.display();
        p2.display();
        p3.display();
    }
}
