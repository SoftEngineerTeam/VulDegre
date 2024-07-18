void CWE134_Uncontrolled_Format_String__char_file_vprintf_66b_badSink(char * dataArray[])
{
    /* copy data out of dataArray */
    char * data = dataArray[2];
    badVaSink(data, data);
}