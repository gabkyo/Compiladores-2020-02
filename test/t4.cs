class A {
int x;
    static void F(B b) {
        b.x = 1;
} }
class B: A {
    static void F(B b) {
        b.x = 1;
} } 