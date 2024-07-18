void CWE526_Info_Exposure_Environment_Variables__basic_14_bad()
{
    if(globalFive==5)
    {
        /* FLAW: environment variable exposed */
        printLine(getenv("PATH"));
    }
}