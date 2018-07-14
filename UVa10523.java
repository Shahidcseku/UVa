import java.math.BigInteger;
import java.util.Scanner;
import java.util.*;
import java.io.IOException;
import java.math.*;

public class UVa10523{
    public static void main(String[] args) {
        int n, a;
        BigInteger ans, tmpA;
        Scanner input = new Scanner(System.in);

        while (input.hasNext()) {
            n = input.nextInt();
            a = input.nextInt();
            ans = new BigInteger("0");
            BigInteger sum = new BigInteger("0");
            tmpA = BigInteger.valueOf(a);
            for (int i = 1; i <= n; i++) {
                sum = sum.add(BigInteger.valueOf(i).multiply(tmpA.pow(i)));
            }
            System.out.println(sum);
        }

    }
}