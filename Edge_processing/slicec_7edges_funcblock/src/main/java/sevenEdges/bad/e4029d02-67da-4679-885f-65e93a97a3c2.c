void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_51_bad()
{
    size_t data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = rand();
    CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_51b_badSink(data);
}