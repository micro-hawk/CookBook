package com.microhawkx.beginner;

import java.util.Scanner;

public class array {

    public static void reverseArray(int a[], int n) {
        int[] b = new int[n];
        int j = n;
        for (int i = 0; i < n; i++) {
            b[j - 1] = a[i];
            j = j - 1;
        }

        // Printing that  array
        for(int e : b) System.out.print(e + " ");
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] array1 = new int[n];

        for (int i=0; i<array1.length; i++) {
            int input = in.nextInt();
            array1[i] = input;
        }

        reverseArray(array1, n);
    }
}
