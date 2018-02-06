import java.util.Scanner;
public class JavaApplication20 {

    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = null;
        String b = null;
        a = scan.next();
        b = scan.next();
        if (a.equalsIgnoreCase(b))
        {
            System.out.println(0);
        }
        else if(a.compareToIgnoreCase(b) < b.compareToIgnoreCase(a))
        {
            System.out.println(-1);
        }
        else {
            System.out.println(1);
        }
    }
    
}
