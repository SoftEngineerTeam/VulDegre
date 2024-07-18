wchar_t * CWE665_Improper_Initialization__wchar_t_cat_22_badSource(wchar_t * data)
{
    if(CWE665_Improper_Initialization__wchar_t_cat_22_badGlobal)
    {
        /* FLAW: Do not initialize data */
        ; /* empty statement needed for some flow variants */
    }
    return data;
}