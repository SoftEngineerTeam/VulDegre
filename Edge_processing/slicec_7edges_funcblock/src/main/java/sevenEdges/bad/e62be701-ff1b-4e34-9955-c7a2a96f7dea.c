void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66b_badSink(FILE * dataArray[])
{
    /* copy data out of dataArray */
    FILE * data = dataArray[2];
    /* FLAW: Point data to another file handle without closing the handle from the source */
    data = fopen("BadSink_fopen.txt", "w+");
    /* avoid incidental for not closing the file handle */
    if (data != NULL)
    {
        fclose(data);
    }
}