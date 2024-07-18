void CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    /* dereference dataPtr into data */
    wchar_t * data = (*dataPtr);
    badVaSink(data, data);
}