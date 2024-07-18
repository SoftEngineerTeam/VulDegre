static void badSink(char * data)
{
    if(badStatic)
    {
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        printf(data);
    }
}