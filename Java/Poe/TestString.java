import java.util.*;
import StringOps.StringOperation;

public class TestString {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        StringOperation obj = new StringOperation();

        System.out.println("Enter first string:");
        String s1 = sc.nextLine();

        System.out.println("Enter second string:");
        String s2 = sc.nextLine();

        System.out.println("Concatenation: " + obj.concatenate(s1, s2));
        System.out.println("Reverse of first string: " + obj.reverse(s1));

        System.out.println("Enter position to delete:");
        int pos = sc.nextInt();
        sc.nextLine();

        System.out.println("After deletion: " + obj.deleteAtPosition(s1, pos));
        System.out.println("Alternate Caps: " + obj.alternateCaps(s1));
    }
}