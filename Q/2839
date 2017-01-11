import java.util.Scanner;

public class Main
{

    public static int Calculate(int n)
    {
        int threeKg = 3;
        int fiveKg = 5;

        for (int i = 0; threeKg * i <= n; ++i)
        {
            for (int j = 0; fiveKg * j <= (n - (threeKg * i)); ++j)
            {

                if (n - ((threeKg * i) + (fiveKg * j)) == 0)
                {
                    return i + j;
                }




            }

        }

        return -1;

    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        System.out.println(Calculate(n));

    }
}
