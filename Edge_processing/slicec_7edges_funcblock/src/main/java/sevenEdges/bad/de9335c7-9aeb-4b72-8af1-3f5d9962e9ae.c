void CWE416_Use_After_Free__malloc_free_char_15_bad()
{
    char * data;
    /* Initialize data */
    data = NULL;
    switch(6)
    {
    case 6:
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
        free(data);
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        /* POTENTIAL FLAW: Use of data that may have been freed */
        printLine(data);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not freed */
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}