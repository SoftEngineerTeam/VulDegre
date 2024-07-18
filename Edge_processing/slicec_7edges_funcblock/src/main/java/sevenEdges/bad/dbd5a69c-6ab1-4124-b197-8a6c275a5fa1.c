void CWE843_Type_Confusion__char_64_bad()
{
    void * data;
    /* Initialize data */
    data = NULL;
    {
        /* FLAW: Point data to a char */
        char charBuffer = 'a';
        data = &charBuffer;
    }
    CWE843_Type_Confusion__char_64b_badSink(&data);
}