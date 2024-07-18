void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_15_bad()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int dataBadBuffer = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    switch(6)
    {
    case 6:
        /* FLAW: Set data to point to an int */
        data = &dataBadBuffer;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    /* POTENTIAL FLAW: Attempt to print a struct when data may be a non-struct data type */
    printStructLine((twoIntsStruct *)data);
}