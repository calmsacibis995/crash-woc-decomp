int
GetElapsedTime(void)
{
	int count = REG_RCNT1_COUNT;
	
	elapsed_time = count - framestarttime;
	if (elapsed_time < 0)
		elapsed_time = elapsed_time + 65536;
	
	return elapsed_time;
}
