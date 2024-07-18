void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_21_bad()
{
    size_t data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%zu", &data);
    badStatic = 1; /* true */
    badSink(data);
}