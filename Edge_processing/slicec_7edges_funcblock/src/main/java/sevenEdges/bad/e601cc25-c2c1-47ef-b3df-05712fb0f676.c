void CWE188_Reliance_on_Data_Memory_Layout__modify_local_03_bad()
{
    if(5==5)
    {
        {
            struct
            {
                char charFirst;
                int intSecond;
            } structCharInt;
            char *charPtr;
            structCharInt.charFirst = 1;
            charPtr = &structCharInt.charFirst;
            /* FLAW: Attempt to modify intSecond assuming intSecond comes after charFirst and
             * is aligned on an int-boundary after charFirst */
            *(int*)(charPtr + sizeof(int)) = 5;
            printIntLine(structCharInt.charFirst);
            printIntLine(structCharInt.intSecond);
        }
    }
}