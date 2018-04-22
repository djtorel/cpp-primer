/*
Exercise 2.28: Explain the following definitions. Identify any that are illegal.

(a) int i, *const cp;
    Legal Int i, Illegal const pointer cp, illegal because it is uninitialized
(b) int *p1, *const p2;
    Legal pointer to int p1, illegal const pointer to int p2 (uninitialized)
(c) const int ic, &r = ic;
    Legal, const int ic, const int reference &r
(d) const int *const p3;
    Illegal, const pointer to const int p3, uninitialized
(e) const int *p;
    Legal, pointer to const int, pointer not const so can be uninitialized
*/

int main() {
    // int i, *const cp;
    // int *p1, *const p2;
    // const int *const p3;
    // const int *p;
}