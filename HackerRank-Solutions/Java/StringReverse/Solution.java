import java.util.Scanner;

public class Solution {
    public static void main ( String[] args ) {
        Scanner reader = new Scanner (System.in);
        String s =  reader.nextLine ();
        String originalString = s;
        String reverse = "";

        for(int i=s.length () - 1; i>=0; i--){
            reverse = reverse + s.charAt (i);
        }
//        System.out.println (reverse);

        if(originalString.equals (reverse)){
            System.out.println ("Yes");
        } else{
            System.out.println ("No");
        }
    }
}
