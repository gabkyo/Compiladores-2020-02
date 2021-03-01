public class Test1
{
    public static void Main(string[] Args)
    {
        Factorial.Evaluate(123);
    }
}

static class Factorial
{
    public static int Evaluate(int n)
    {
        int result = 1;
        do
        {
            result *= x;
            --x;
        } while (n = 0);
        return result;
    }
}
