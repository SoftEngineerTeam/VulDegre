void CWE416_Use_After_Free__malloc_free_char_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* dereference dataPtr into data */
    char * data = (*dataPtr);
    /* POTENTIAL FLAW: Use of data that may have been freed */
    printLine(data);
    /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not freed */
}