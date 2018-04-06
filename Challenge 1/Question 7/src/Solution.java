import java.util.Scanner;

public class Solution {
    /**
     *
     * @param args the argument
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        for (int index = 1; index < 11; index++) {
            int result = N * index;
            System.out.println(N + " x " + index + " = " + result);
        }
    }
}