void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_32_bad()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL; /* Initialize data */
    {
        twoIntsStruct * data = *dataPtr1;
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i].intOne = 1;
                    dataBuffer[i].intTwo = 1;
                }
            }
            data = dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        printStructLine(&data[0]);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        free(data);
    }
}