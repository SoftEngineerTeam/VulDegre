void CWE121_Stack_Based_Buffer_Overflow__CWE129_rand_41_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    badSink(data);
}