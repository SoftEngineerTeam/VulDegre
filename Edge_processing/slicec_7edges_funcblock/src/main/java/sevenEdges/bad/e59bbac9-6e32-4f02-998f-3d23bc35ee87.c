void CWE775_Missing_Release_of_File_Descriptor_or_Handle__open_no_close_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    int * dataPtr = (int *)dataVoidPtr;
    /* dereference dataPtr into data */
    int data = (*dataPtr);
    /* FLAW: No attempt to close the file */
    ; /* empty statement needed for some flow variants */
}