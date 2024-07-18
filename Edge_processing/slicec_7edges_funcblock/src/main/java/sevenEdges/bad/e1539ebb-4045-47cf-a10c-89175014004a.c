void CWE127_Buffer_Underread__CWE839_fscanf_66_bad()
{
    int data;
    int dataArray[5];
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    /* put data in array */
    dataArray[2] = data;
    CWE127_Buffer_Underread__CWE839_fscanf_66b_badSink(dataArray);
}