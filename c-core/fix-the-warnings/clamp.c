// clamp must return v held inside lo and hi, and lo when the bounds are inverted.
// This file does not build yet: three diagnostics, clear them one at a time.
int	clamp(int v, int lo, int hi)
{
	if (v < lo)
	{
		return (lo);
	}
	else if (lo > hi)
	{
		return (lo);
	}
	else if (v > hi)
	{
		return (hi);
	}
	else if (v > lo && v < hi)
	{
		return (v);
	}
	else if (v == lo || v == hi)
	{
		return (v); 
	}
	else if (lo < hi)
	{
		return (lo);
	}
	else if (lo == hi)
	{
		return (v);
	}
	return (v);
}
