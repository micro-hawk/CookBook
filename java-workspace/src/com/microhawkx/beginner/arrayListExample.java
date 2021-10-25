package com.microhawkx.beginner;

import java.util.ArrayList;
import java.util.Scanner;

public class arrayListExample {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        ArrayList<Integer> arrLi = new ArrayList<Integer>(n);

        for (int i=0; i<n; i++) {
            int input = in.nextInt();
            arrLi.add(input);
        }

        //Printing ArrayList
//        for(int e: arrLi) System.out.print(e+ " ");

        System.out.println(arrLi);
    }
}
