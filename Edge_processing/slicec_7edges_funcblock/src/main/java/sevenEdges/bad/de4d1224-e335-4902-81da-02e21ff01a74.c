void CWE401_Memory_Leak__malloc_realloc_int64_t_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int64_t * data = (int64_t *)malloc(100*sizeof(int64_t));
            if (data == NULL) {exit(-1);}
            /* Initialize and make use of data */
            data[0] = 5LL;
            printLongLongLine(data[0]);
            /* FLAW: If realloc() fails, the initial memory block will not be freed() */
            data = (int64_t *)realloc(data, (130000)*sizeof(int64_t));
            if (data != NULL)
            {
                /* Reinitialize and make use of data */
                data[0] = 10LL;
                printLongLongLine(data[0]);
                free(data);
            }
        }
    }
}