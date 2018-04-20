/*
Exercise 2.21: Explain each of the following definitions. Indicate whether any
are illegal and, if so, why.

int i = 0;

(a) double* dp = &i;
    Cannot convert int* to double*, must be same type
(b) int *ip = i;
    Cannot initialize pointer with int variable
(c) int *p = &i;
    Valid, int* can point to &int
*/
int main()
{
    int i = 0;

    // Cannot convert int* to double*, must be same type
    // double *dp = &i;
    // int *ip = i;
    int *p = &i;
}