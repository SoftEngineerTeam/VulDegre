void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_44_bad()
{
    size_t data;
    /* define a function pointer */
    void (*funcPtr) (size_t) = badSink;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%zu", &data);
    /* use the function pointer */
    funcPtr(data);
}