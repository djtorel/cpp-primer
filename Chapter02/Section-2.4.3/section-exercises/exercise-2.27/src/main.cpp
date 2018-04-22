/*
Exercise 2.27: Which of the following initializations are legal? Explain why.

(a) int i = -1, &r = 0;
    i is legal, &r is not because it is referencing a const int
(b) int *const p2 = &i2;
    Legal. Const pointer (high level) to &i2
(c) const int i = -1, &r = 0;
    Legal, i is a const int, &r is a reference to a const int
(d) const int *const p3 = &i2;
    Legal, p3 is a const pointer to a const int reference
(e) const int *p1 = &i2;
    Legal, pointer to const int ref
(f) const int &const r2;
    Illegal, uninitialized const also cannot create a &const. Const qualifier
    cannot be applied to reference.
(g) const int i2 = i, &r = i;
    Legal, creates const int i2, and reference to const int i
*/

int main() {
    // int i2 = 12;
    // const int *p1 = &i2;

    // int i = 2;
    // const int i2 = i, &r = i;
}