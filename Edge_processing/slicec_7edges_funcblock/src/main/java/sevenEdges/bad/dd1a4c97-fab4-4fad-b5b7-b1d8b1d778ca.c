void CWE126_Buffer_Overread__CWE129_rand_66_bad()
{
    int data;
    int dataArray[5];
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    /* put data in array */
    dataArray[2] = data;
    CWE126_Buffer_Overread__CWE129_rand_66b_badSink(dataArray);
}