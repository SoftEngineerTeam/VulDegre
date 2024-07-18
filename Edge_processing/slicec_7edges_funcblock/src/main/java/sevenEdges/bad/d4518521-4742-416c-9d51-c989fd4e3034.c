void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_66_bad()
{
    void * data;
    void * dataArray[5];
    twoIntsStruct dataGoodBuffer;
    int dataBadBuffer = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    /* FLAW: Set data to point to an int */
    data = &dataBadBuffer;
    /* put data in array */
    dataArray[2] = data;
    CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_66b_badSink(dataArray);
}