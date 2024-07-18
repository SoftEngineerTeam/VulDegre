static void badSink(wchar_t * data)
{
    if(badStatic)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}