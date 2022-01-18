import java.util.Scanner;

public class ladder_pattern {


    public static void Print_Ladder()
    {
        int num;
        Scanner input = new Scanner(System.in);
        System.out.print("How many ladder do you want to print: ");
        num = input.nextInt();

        for(int i=0;i<=num;i++)
        {
            System.out.println("*    *");
            System.out.println("*    *");

            if(i<num)
            {
                System.out.println("******");
            }
        }


    }

    public static void main(String[] args) {

        // Problem is if n = 2;
        // to hume ladder print karni hai
        // *    * 
        // *    *
        // ******
        // *    * 
        // *    *
        // ******
        // *    * 
        // *    *

        Print_Ladder();



    }
}

