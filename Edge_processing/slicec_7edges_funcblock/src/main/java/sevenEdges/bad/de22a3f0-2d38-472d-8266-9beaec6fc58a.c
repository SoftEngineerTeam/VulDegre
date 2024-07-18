void CWE758_Undefined_Behavior__int64_t_malloc_use_16_bad()
{
    while(1)
    {
        {
            int64_t * pointer = (int64_t *)malloc(sizeof(int64_t));
            if (pointer == NULL) {exit(-1);}
            int64_t data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printLongLongLine(data);
        }
        break;
    }
}