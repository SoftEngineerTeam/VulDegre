void CWE121_Stack_Based_Buffer_Overflow__CWE129_large_44_bad()
{
    int data;
    /* define a function pointer */
    void (*funcPtr) (int) = badSink;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    /* use the function pointer */
    funcPtr(data);
}