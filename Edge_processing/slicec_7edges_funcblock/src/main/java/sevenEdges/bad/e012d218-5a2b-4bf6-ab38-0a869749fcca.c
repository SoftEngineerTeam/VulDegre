void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_18_bad()
{
    struct _twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* Initialize and make use of data */
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    goto sink;
sink:
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}