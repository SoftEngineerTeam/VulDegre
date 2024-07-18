void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_41_bad()
{
    size_t data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = rand();
    badSink(data);
}