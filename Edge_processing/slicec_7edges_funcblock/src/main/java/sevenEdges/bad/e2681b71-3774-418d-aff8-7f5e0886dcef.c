void CWE197_Numeric_Truncation_Error__int_fscanf_to_char_67_bad()
{
    int data;
    CWE197_Numeric_Truncation_Error__int_fscanf_to_char_67_structType myStruct;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    myStruct.structFirst = data;
    CWE197_Numeric_Truncation_Error__int_fscanf_to_char_67b_badSink(myStruct);
}