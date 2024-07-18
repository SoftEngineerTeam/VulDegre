void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66b_badSink(int dataArray[])
{
    /* copy data out of dataArray */
    int data = dataArray[2];
    /* FLAW: Assign data to another file descriptor without closing the descriptor from the source */
    data = OPEN("BadSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    /* avoid incidental for not closing the file */
    if (data != -1)
    {
        CLOSE(data);
    }
}