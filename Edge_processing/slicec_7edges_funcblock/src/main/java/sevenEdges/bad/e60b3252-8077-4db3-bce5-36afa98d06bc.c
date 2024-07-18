static void badSink(FILE * data)
{
    /* FLAW: No attempt to close the file */
    ; /* empty statement needed for some flow variants */
}