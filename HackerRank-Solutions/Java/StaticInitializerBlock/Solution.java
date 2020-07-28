import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

//Write your code here

static Scanner in = new Scanner (System.in);
    static int B = in.nextInt ();
    static int H = in.nextInt ();

    static Boolean flag = B>0 && H>0;
    static {
        if(!flag){
            System.out.println ("java.lang.Exception: Breadth and height must be positive");
        }
    }

public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class

