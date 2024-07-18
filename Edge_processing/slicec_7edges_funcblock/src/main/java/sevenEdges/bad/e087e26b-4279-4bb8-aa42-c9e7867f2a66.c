void CWE587_Assignment_of_Fixed_Address_to_Pointer__basic_14_bad()
{
    if(globalFive==5)
    {
        {
            /* FLAW: Assigning fixed address to pointer */
            char *charPointer = (char*)0x400000;
            printHexCharLine(*charPointer);
        }
    }
}