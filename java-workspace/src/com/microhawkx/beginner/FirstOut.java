package com.microhawkx.beginner;

import java.util.Scanner;

public class FirstOut {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
//        System.out.println("HEllO world");
        System.out.println("Enter the first number: ");
        int a = in.nextInt();
        System.out.println("Enter the second number: ");
        int b = in.nextInt();
        System.out.println("Enter the number you want to operate: ");
        System.out.println("1) Addition");
        System.out.println("2) Subtraction");System.out.println("3) Multiplication");System.out.println("4) Division\n");

        int input = in.nextInt();
        switch (input){
            case 1:
                System.out.println("Addition is " + (a+b));
                break;
            case 2:
                System.out.println("Subtraction is "+ (a-b));
                break;
            case 3:
                System.out.println("Multiplication is "+ (a*b));
                break;
            case 4:
                System.out.println("Division is " + (a/b));
                break;
            default:
                System.out.println("Something went wrong.");
        }


    }
}
