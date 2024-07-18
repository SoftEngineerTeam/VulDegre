void CWE126_Buffer_Overread__CWE170_wchar_t_memcpy_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        {
            wchar_t data[150], dest[100];
            /* Initialize data */
            wmemset(data, L'A', 149);
            data[149] = L'\0';
            memcpy(dest, data, 99*sizeof(wchar_t));
            /* FLAW: do not explicitly null terminate dest after the use of memcpy */
            printWLine(dest);
        }
    }
}