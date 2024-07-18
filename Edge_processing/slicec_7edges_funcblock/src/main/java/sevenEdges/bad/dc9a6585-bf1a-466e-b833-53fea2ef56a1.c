static void badSink(wchar_t * data)
{
    if(badStatic)
    {
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        wprintf(data);
    }
}