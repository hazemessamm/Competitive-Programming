import java.util.Scanner;
public class CF271A {

    public static void main(String[] args) {
        String x = null;
        Scanner scan = new Scanner(System.in);
        x = scan.next();
        int y = 0;
        
        
        y = Integer.parseInt(x);
        y = y + 1;
        x = String.valueOf(y);
        int cnt = 0;
        while(true)
        {
            int i =0, j = 0;
            int flag = 0;
        for(i = 0; i < 4; i++)
        {
            for(j = 0; j < 4; j++)
            {
                if (x.charAt(i) == x.charAt(j) && i != j)
                {
                    y = Integer.parseInt(x);
                    y = y + 1;
                    x = String.valueOf(y);
                    flag = 1;
                }
            }
        }
        if(flag == 0)
        {
            System.out.println(x);
            break;
        }
    }
    }
}
