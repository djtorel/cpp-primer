/*
Exercise 2.12: Which, if any, of the following names are invalid?

(a) int double = 3.14;
    Invalid, reserved word double
(b) int _;
    Valid, though not recommended probably, means nothing.
(c) int catch-22;
    Invalid, '-' not valid character
(d) int 1_or_2 = 1;
    Invalid, starts with number
(e) double Double = 3.14;
    Valid, Double is not a reserved word, but double is.
*/

int main()
{
    // int double = 3.14;
    int _;
    // int catch-22;
    // int 1_or_2 = 1;
    double Double = 3.14;
}