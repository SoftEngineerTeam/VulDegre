void CWE78_OS_Command_Injection__wchar_t_file_w32_spawnlp_67b_badSink(CWE78_OS_Command_Injection__wchar_t_file_w32_spawnlp_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    /* wspawnlp - searches for the location of the command among
     * the directories specified by the PATH environment variable */
    /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
    _wspawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}