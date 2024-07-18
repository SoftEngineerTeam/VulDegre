void CWE121_Stack_Based_Buffer_Overflow__CWE129_large_68_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_large_68_badData = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_large_68b_badSink();
}