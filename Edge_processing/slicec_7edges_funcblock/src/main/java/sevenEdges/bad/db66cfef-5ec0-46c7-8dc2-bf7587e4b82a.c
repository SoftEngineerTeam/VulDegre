void CWE126_Buffer_Overread__CWE170_char_memcpy_15_bad()
{
    switch(6)
    {
    case 6:
    {
        char data[150], dest[100];
        /* Initialize data */
        memset(data, 'A', 149);
        data[149] = '\0';
        memcpy(dest, data, 99*sizeof(char));
        /* FLAW: do not explicitly null terminate dest after the use of memcpy */
        printLine(dest);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}