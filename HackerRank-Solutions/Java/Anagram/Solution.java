import java.util.Scanner;

public class Solution {
    static boolean isAnagram(String a, String b) {

        String a1 = a.toLowerCase ();
        String b1 = b.toLowerCase ();

        boolean isComplete= false;
        boolean visited[] = new boolean[b1.length ()];

        if(a1.length () == b1.length ()) {
            for (int i = 0; i < a1.length (); i++) {
                char c = a1.charAt (i);
                isComplete = false;
                for (int j = 0; j < b1.length (); j++) {
                    if (b1.charAt (j) == c && !visited[j]) {
                        visited[j] = true;
                        isComplete = true;
                        break;
                    }
                }
                if (!isComplete) {
                    break;
                }
            }
        }

        if(isComplete){
            return true;
        } else
        {
            return false;
        }
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
