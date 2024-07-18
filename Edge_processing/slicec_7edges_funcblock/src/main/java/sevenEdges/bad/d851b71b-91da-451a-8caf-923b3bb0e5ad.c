static wchar_t * badSource(wchar_t * data)
{
    if(badStatic)
    {
        /* FLAW: Did not leave space for a null terminator */
        data = (wchar_t *)malloc(10*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    return data;
}