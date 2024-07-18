void CWE194_Unexpected_Sign_Extension__negative_memcpy_18_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    goto source;
source:
    /* FLAW: Use a negative number */
    data = -1;
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
             * the sign extension could result in a very large number */
            memcpy(dest, source, data);
            dest[data] = '\0'; /* NULL terminate */
        }
        printLine(dest);
    }
}