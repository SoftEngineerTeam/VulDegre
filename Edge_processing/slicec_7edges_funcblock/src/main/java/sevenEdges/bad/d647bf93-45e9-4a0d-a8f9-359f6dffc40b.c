void CWE464_Addition_of_Data_Structure_Sentinel__basic_52_bad()
{
    char data;
    data = ' ';
    {
        char charArraySource[2];
        charArraySource[0] = (char)getc(stdin);
        charArraySource[1] = '\0';
        /* FLAW: If the character entered on the command line is not an int,
         * a null value will be returned */
        data = (char)atoi(charArraySource);
    }
    CWE464_Addition_of_Data_Structure_Sentinel__basic_52b_badSink(data);
}