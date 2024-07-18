static void badSink(struct _twoIntsStruct * data)
{
    if(badStatic)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}