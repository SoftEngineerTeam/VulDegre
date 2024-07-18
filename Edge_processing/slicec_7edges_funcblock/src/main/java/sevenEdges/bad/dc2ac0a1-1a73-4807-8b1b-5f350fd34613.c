void CWE758_Undefined_Behavior__double_pointer_malloc_use_01_bad()
{
    {
        double * * pointer = (double * *)malloc(sizeof(double *));
        if (pointer == NULL) {exit(-1);}
        double * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        free(pointer);
        printDoubleLine(*data);
    }
}