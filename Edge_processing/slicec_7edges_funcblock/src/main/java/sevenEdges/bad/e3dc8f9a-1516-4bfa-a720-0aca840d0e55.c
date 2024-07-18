void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_68_bad()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int dataBadBuffer = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    /* FLAW: Set data to point to an int */
    data = &dataBadBuffer;
    CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_68_badData = data;
    CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_68b_badSink();
}