void CWE121_Stack_Based_Buffer_Overflow__CWE129_rand_21_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    badStatic = 1; /* true */
    badSink(data);
}