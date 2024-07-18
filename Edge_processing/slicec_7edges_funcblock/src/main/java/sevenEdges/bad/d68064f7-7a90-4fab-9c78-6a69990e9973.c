static void badSink()
{
    char * data = CWE78_OS_Command_Injection__char_file_w32_spawnv_45_badData;
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* spawnv - specify the path where the command is located */
        /* POTENTIAL FLAW: Execute command without validating input possibly leading to command injection */
        _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}