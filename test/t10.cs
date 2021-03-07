class Base {
    public static void F() {}
}
class Derived: Base
{
    new private static void F() {}
class MoreDerived: Derived
{
    static void G() { F(); }
// Hides Base.F in Derived only
// Invokes Base.F
}
}