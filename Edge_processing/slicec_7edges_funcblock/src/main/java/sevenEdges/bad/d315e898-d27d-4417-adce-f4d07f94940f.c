void CWE401_Memory_Leak__malloc_realloc_int_15_bad()
{
    switch(6)
    {
    case 6:
    {
        int * data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        data[0] = 5;
        printIntLine(data[0]);
        /* FLAW: If realloc() fails, the initial memory block will not be freed() */
        data = (int *)realloc(data, (130000)*sizeof(int));
        if (data != NULL)
        {
            /* Reinitialize and make use of data */
            data[0] = 10;
            printIntLine(data[0]);
            free(data);
        }
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}