void CWE194_Unexpected_Sign_Extension__rand_memcpy_32_bad()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    /* Initialize data */
    data = 0;
    {
        short data = *dataPtr1;
        /* FLAW: Use a random value that could be less than 0 */
        data = (short)RAND32();
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
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
}