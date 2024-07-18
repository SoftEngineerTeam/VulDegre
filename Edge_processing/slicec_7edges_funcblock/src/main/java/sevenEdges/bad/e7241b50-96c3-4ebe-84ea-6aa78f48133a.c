void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_32_bad()
{
    FILE * data;
    FILE * *dataPtr1 = &data;
    FILE * *dataPtr2 = &data;
    data = NULL;
    {
        FILE * data = *dataPtr1;
        /* POTENTIAL FLAW: Create a file handle using fopen() that may not be closed properly */
        data = fopen("BadSource_fopen.txt", "w+");
        *dataPtr1 = data;
    }
    {
        FILE * data = *dataPtr2;
        /* FLAW: Point data to another file handle without closing the handle from the source */
        data = fopen("BadSink_fopen.txt", "w+");
        /* avoid incidental for not closing the file handle */
        if (data != NULL)
        {
            fclose(data);
        }
    }
}