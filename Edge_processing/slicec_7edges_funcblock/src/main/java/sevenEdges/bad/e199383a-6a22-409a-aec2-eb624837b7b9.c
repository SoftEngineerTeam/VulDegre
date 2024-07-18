void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_45_bad()
{
    size_t data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%zu", &data);
    CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_45_badData = data;
    badSink();
}