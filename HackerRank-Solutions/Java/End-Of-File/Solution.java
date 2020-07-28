import java.util.Scanner;

public class Solution {
    public static void main ( String[] args ) {
        Scanner in = new Scanner(System.in);
        String l; //l = line

        int i =1;
        while(in.hasNext ()){
            l = in.nextLine ();
            System.out.println (i+ " "+l);
            i++;
        }
    }
}
