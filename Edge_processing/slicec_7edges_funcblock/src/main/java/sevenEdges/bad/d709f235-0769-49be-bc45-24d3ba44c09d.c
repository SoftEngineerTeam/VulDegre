void CWE843_Type_Confusion__char_68b_badSink()
{
    void * data = CWE843_Type_Confusion__char_68_badData;
    /* POTENTIAL FLAW: Attempt to access data as an int */
    printIntLine(*((int*)data));
}