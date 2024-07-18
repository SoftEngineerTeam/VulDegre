void CWE675_Duplicate_Operations_on_Resource__open_51b_badSink(int data)
{
    /* POTENTIAL FLAW: Close the file in the sink (it may have been closed in the Source) */
    CLOSE(data);
}