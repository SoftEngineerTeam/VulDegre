void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_34_bad()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_34_unionType myUnion;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); /* fill with L'C's */
            source[100-1] = L'\0'; /* null terminate */
            /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
            wcscpy(data, source);
            printWLine(data);
            free(data);
        }
    }
}