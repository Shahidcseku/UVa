#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int sum=0,n,a;
    while(scanf("%d %d",&n,&a)==2)

    {
        for(int i=1; i<=n; i++)
        {
            sum=sum+(i*pow(a,i));
        }
        printf("%d\n",sum);
        sum=0;
    }
}


/*
import java.math.BigInteger;
import java.util.Scanner;
import java.util.*;
import java.io.IOException;
import java.math.*;

public class Uva_Very_Easy {
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
}*/
