/*
Exercise 2.15: Which of the following definitions, if any, are invalid? Why?

(a) int ival = 1.01;
    Valid, though will be truncated
(b) int &rval1 = 1.01;
    Invalid, cannot reference literal, only an object
(c) int &rval2 = ival;
    Valid, because ival is an int
(d) int &rval3;
    Invalid, must reference object and be initialized.
*/