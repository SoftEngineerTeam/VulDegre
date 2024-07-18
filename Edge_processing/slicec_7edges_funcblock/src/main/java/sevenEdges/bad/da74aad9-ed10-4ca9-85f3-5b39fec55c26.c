void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_bad()
{
    struct _twoIntsStruct * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    /* Initialize and make use of data */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_badData = data;
    CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68b_badSink();
}