void CWE401_Memory_Leak__malloc_realloc_char_03_bad()
{
    if(5==5)
    {
        {
            char * data = (char *)malloc(100*sizeof(char));
            if (data == NULL) {exit(-1);}
            /* Initialize and make use of data */
            strcpy(data, "A String");
            printLine(data);
            /* FLAW: If realloc() fails, the initial memory block will not be freed() */
            data = (char *)realloc(data, (130000)*sizeof(char));
            if (data != NULL)
            {
                /* Reinitialize and make use of data */
                strcpy(data, "New String");
                printLine(data);
                free(data);
            }
        }
    }
}