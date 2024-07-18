void CWE401_Memory_Leak__malloc_realloc_struct_twoIntsStruct_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            struct _twoIntsStruct * data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
            if (data == NULL) {exit(-1);}
            /* Initialize and make use of data */
            data[0].intOne = 0;
            data[0].intTwo = 0;
            printStructLine((twoIntsStruct *)&data[0]);
            /* FLAW: If realloc() fails, the initial memory block will not be freed() */
            data = (struct _twoIntsStruct *)realloc(data, (130000)*sizeof(struct _twoIntsStruct));
            if (data != NULL)
            {
                /* Reinitialize and make use of data */
                data[0].intOne = 1;
                data[0].intTwo = 1;
                printStructLine((twoIntsStruct *)&data[0]);
                free(data);
            }
        }
    }
}