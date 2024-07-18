void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_bad()
{
    int data;
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_structType myStruct;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Create a file descriptor using open() that may not be closed properly */
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    myStruct.structFirst = data;
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67b_badSink(myStruct);
}