void CWE675_Duplicate_Operations_on_Resource__open_05_bad()
{
    int data;
    data = -1; /* Initialize data */
    if(staticTrue)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        /* POTENTIAL FLAW: Close the file in the source */
        CLOSE(data);
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Close the file in the sink (it may have been closed in the Source) */
        CLOSE(data);
    }
}