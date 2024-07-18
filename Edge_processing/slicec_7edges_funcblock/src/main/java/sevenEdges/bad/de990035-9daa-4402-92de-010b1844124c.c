static void badSink(int data)
{
    if(badStatic)
    {
        /* FLAW: No attempt to close the file */
        ; /* empty statement needed for some flow variants */
    }
}