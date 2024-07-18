void CWE665_Improper_Initialization__wchar_t_cat_34_bad()
{
    wchar_t * data;
    CWE665_Improper_Initialization__wchar_t_cat_34_unionType myUnion;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Do not initialize data */
    ; /* empty statement needed for some flow variants */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); /* fill with L'C's */
            source[100-1] = L'\0'; /* null terminate */
            /* POTENTIAL FLAW: If data is not initialized properly, wcscat() may not function correctly */
            wcscat(data, source);
            printWLine(data);
        }
    }
}