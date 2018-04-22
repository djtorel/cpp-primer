/*
Exercise 2.26: Which of the following are legal? For those that are illegal,
explain why.

(a) const int buf;
    Illegal, uninitialized const
(b) int cnt = 0;
    Legal
(c) const int sz = cnt;
    Legal, can be initialized with non-const object
(d) ++cnt; ++sz;
    Illegal, cannot modify value of const int sz
*/