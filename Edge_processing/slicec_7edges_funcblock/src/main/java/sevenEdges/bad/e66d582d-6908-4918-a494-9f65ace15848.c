void CWE457_Use_of_Uninitialized_Variable__double_pointer_63b_badSink(double * * dataPtr)
{
    double * data = *dataPtr;
    /* POTENTIAL FLAW: Use data without initializing it */
    printDoubleLine(*data);
}