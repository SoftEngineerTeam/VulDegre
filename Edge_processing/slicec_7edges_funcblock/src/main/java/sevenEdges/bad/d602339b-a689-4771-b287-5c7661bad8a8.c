void CWE134_Uncontrolled_Format_String__char_environment_vfprintf_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* dereference dataPtr into data */
    char * data = (*dataPtr);
    badVaSink(data, data);
}