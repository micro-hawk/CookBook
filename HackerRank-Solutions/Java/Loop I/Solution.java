import java.util.Scanner;

public class JavaLoop1 {
    public static void main ( String[] args ) {
        //System.out.println ("Enter your number: ");
        Scanner in = new Scanner (System.in);
        int n = in.nextInt ();

        for(int i=1; i<=10; i++){
            System.out.println (n+ " x "+ i +" = " + (n*i) );
        }
    }
}
