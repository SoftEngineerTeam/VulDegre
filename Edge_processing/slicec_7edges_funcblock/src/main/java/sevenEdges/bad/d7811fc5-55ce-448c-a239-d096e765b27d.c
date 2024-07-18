void CWE194_Unexpected_Sign_Extension__negative_malloc_67_bad()
{
    short data;
    CWE194_Unexpected_Sign_Extension__negative_malloc_67_structType myStruct;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a negative number */
    data = -1;
    myStruct.structFirst = data;
    CWE194_Unexpected_Sign_Extension__negative_malloc_67b_badSink(myStruct);
}