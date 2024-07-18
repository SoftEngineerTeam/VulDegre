void CWE775_Missing_Release_of_File_Descriptor_or_Handle__fopen_no_close_15_bad()
{
    FILE * data;
    data = NULL;
    /* POTENTIAL FLAW: Open a file without closing it */
    data = fopen("BadSource_fopen.txt", "w+");
    switch(6)
    {
    case 6:
        /* FLAW: No attempt to close the file */
        ; /* empty statement needed for some flow variants */
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}