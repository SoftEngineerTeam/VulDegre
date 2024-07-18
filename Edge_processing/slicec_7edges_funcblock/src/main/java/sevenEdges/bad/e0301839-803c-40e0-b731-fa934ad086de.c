void CWE476_NULL_Pointer_Dereference__int_34_bad()
{
    int * data;
    CWE476_NULL_Pointer_Dereference__int_34_unionType myUnion;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(*data);
    }
}