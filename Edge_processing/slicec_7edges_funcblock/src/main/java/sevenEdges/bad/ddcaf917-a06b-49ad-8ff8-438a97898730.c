void CWE476_NULL_Pointer_Dereference__wchar_t_21_bad()
{
    wchar_t * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    badStatic = 1; /* true */
    badSink(data);
}