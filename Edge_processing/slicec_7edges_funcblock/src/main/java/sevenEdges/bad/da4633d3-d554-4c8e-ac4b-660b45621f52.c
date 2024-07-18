void CWE758_Undefined_Behavior__char_pointer_malloc_use_01_bad()
{
    {
        char * * pointer = (char * *)malloc(sizeof(char *));
        if (pointer == NULL) {exit(-1);}
        char * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        free(pointer);
        printLine(data);
    }
}