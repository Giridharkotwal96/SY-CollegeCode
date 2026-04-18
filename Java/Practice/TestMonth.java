public class TestMonth {
    public static void main(String[] args) {
        Month m1 = new Month();
        Month m2 = new Month();
        System.out.println("Enter the info 1st month");
        m1.initialize();
        System.out.println("Enter the info 2nd month");
        m2.initialize();
        
        if(m1.totalHolidays>=m2.totalHolidays)
                System.out.println(m1.name+" has more holidays!");
        else if(m2.totalHolidays>=m1.totalHolidays)
            System.out.println(m2.name+" has more holidays!");
        else 
            System.out.println("Both month has same no of holidays");
    }
}
