void CWE511_Logic_Time_Bomb__rand_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        srand((unsigned)time(NULL));
        /* FLAW: If a certain number, delete a file */
        if (rand() == NUM_CHECK)
        {
            UNLINK("important_file.txt");
        }
    }
}