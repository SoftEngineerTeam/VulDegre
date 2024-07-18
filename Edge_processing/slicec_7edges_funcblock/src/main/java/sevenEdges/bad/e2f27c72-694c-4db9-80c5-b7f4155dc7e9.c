void CWE467_Use_of_sizeof_on_Pointer_Type__short_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            short * badShort = NULL;
            /* FLAW: Using sizeof the pointer and not the data type in malloc() */
            badShort = (short *)malloc(sizeof(badShort));
            if (badShort == NULL) {exit(-1);}
            *badShort = 5;
            printShortLine(*badShort);
            free(badShort);
        }
    }
}