void CWE369_Divide_by_Zero__float_fscanf_64_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    /* POTENTIAL FLAW: Use a value input from the console using fscanf() */
    fscanf (stdin, "%f", &data);
    CWE369_Divide_by_Zero__float_fscanf_64b_badSink(&data);
}