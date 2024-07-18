void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54_bad()
{
    char * data;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (char *)malloc(50*sizeof(char));
    data[0] = '\0'; /* null terminate */
    CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54b_badSink(data);
}