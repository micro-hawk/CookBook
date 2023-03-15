import java.util.Scanner;

class Solution{

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            String IP = in.next();
            System.out.println(IP.matches(new MyRegex().getPattern()));
        }

    }
}

//Write your code here
class MyRegex {
    // found this regex from stackoverflow.
    private static final String pattern = "^([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\." +
                                           "([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\." +
                                           "([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\." +
                                           "([01]?\\d\\d?|2[0-4]\\d|25[0-5])$";
    public String getPattern() {
        return pattern;
    }
}