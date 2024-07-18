static char * badSource(char * data)
{
    if(badStatic)
    {
        /* FLAW: Do not initialize data */
        ; /* empty statement needed for some flow variants */
    }
    return data;
}