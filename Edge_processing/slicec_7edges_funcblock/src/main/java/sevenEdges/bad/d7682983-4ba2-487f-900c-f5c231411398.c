void CWE467_Use_of_sizeof_on_Pointer_Type__char_03_bad()
{
    if(5==5)
    {
        {
            char * badChar = NULL;
            /* FLAW: Using sizeof the pointer and not the data type in malloc() */
            badChar = (char *)malloc(sizeof(badChar));
            if (badChar == NULL) {exit(-1);}
            *badChar = 'B';
            printHexCharLine(*badChar);
            free(badChar);
        }
    }
}