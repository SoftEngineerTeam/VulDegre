void CWE401_Memory_Leak__strdup_wchar_t_67_bad()
{
    wchar_t * data;
    CWE401_Memory_Leak__strdup_wchar_t_67_structType myStruct;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
        data = wcsdup(myString);
        /* Use data */
        printWLine(data);
    }
    myStruct.structFirst = data;
    CWE401_Memory_Leak__strdup_wchar_t_67b_badSink(myStruct);
}