import java.util.Scanner;
public class JavaApplication37 {

    
    public static void main(String[] args) {
        int x = 0;
        Scanner scan = new Scanner(System.in);
        x = scan.nextInt();
        String colors[] = new String[x];
        boolean power[] = new boolean[6];
        for(int i = 0; i < x; i++)
        {
            colors[i] = scan.next();
            if(colors[i].equalsIgnoreCase("purple"))
            {
                power[0] = true;
            }
            else if(colors[i].equalsIgnoreCase("green"))
            {
                power[1] = true;
            }
            else if(colors[i].equalsIgnoreCase("blue"))
            {
                power[2] = true;
            }
            else if(colors[i].equalsIgnoreCase("orange"))
            {
                power[3] = true;
            }
            else if(colors[i].equalsIgnoreCase("red"))
            {
                power[4] = true; 
            }
            else if(colors[i].equalsIgnoreCase("yellow"))
            {
                power[5] = true;
            }
        }
        int count = 0;
        String y[] = new String[6];
        if(power[0] == false)
        {
            count++;
            y[0] = "Power";
        }
        if(power[1] == false)
        {
            count++;
            y[1] = "Time";
        }
        if(power[2] == false)
        {
            count++;
            y[2] = "Space";
        }
        if(power[3] == false)
        {
            count++;
            y[3] = "Soul";
        }
        if(power[4] == false)
        {
            count++;
            y[4] = "Reality";
        }
        if(power[5] == false)
        {
            count++;
            y[5] = "Mind";
        }
        System.out.println(count);
        for(int i = 0; i < 6; i++)
        {
            if(y[i] != null)
            {
                System.out.println(y[i]);
            }
        }
    }
    
}
