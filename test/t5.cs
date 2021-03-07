interface ITest
{
    void F();
    void F(int x);
    void F(ref int x);
    void F(out int x);
    void F(int x, int y);
    int F(string s);
    int F(int x);
    void F(string[] a);
    void F(params string[] a);
}