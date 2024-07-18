void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_65_bad()
{
    void * data;
    /* define a function pointer */
    void (*funcPtr) (void *) = CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_65b_badSink;
    twoIntsStruct dataGoodBuffer;
    int dataBadBuffer = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    /* FLAW: Set data to point to an int */
    data = &dataBadBuffer;
    /* use the function pointer */
    funcPtr(data);
}