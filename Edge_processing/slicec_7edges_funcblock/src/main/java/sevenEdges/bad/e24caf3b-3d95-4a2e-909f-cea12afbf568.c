void CWE758_Undefined_Behavior__wchar_t_pointer_malloc_use_07_bad()
{
    if(staticFive==5)
    {
        {
            wchar_t * * pointer = (wchar_t * *)malloc(sizeof(wchar_t *));
            if (pointer == NULL) {exit(-1);}
            wchar_t * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printWLine(data);
        }
    }
}