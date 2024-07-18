void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_15_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Create a file descriptor using open() that may not be closed properly */
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    switch(6)
    {
    case 6:
        /* FLAW: Assign data to another file descriptor without closing the descriptor from the source */
        data = OPEN("BadSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        /* avoid incidental for not closing the file */
        if (data != -1)
        {
            CLOSE(data);
        }
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}