int	days_needed(int gallons, int capacity, int fleet)
{
	int days;
	days = 0;
	while(gallons > 0)
	{
		days += 1;
		gallons -= (capacity * fleet); 
		if (gallons <= 0)
		{
			return(days);
		}
	}
	
	return (0);
}
