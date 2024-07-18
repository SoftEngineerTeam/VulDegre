void CWE511_Logic_Time_Bomb__time_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            time_t currentTime;
            /* FLAW: After a certain date, delete a file */
            time(&currentTime);
            if (currentTime > TIME_CHECK)
            {
                UNLINK("important_file.txt");
            }
        }
    }
}