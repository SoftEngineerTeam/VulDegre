void CWE15_External_Control_of_System_or_Configuration_Setting__w32_65b_badSink(char * data)
{
    /* POTENTIAL FLAW: set the hostname to data obtained from a potentially external source */
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}