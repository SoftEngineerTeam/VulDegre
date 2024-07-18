void CWE194_Unexpected_Sign_Extension__negative_memmove_34_bad()
{
    short data;
    CWE194_Unexpected_Sign_Extension__negative_memmove_34_unionType myUnion;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a negative number */
    data = -1;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
                /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
                 * the sign extension could result in a very large number */
                memmove(dest, source, data);
                dest[data] = '\0'; /* NULL terminate */
            }
            printLine(dest);
        }
    }
}