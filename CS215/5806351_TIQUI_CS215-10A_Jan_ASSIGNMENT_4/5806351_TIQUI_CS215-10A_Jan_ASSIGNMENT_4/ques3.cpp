int P (int n)
{
	static int knownP[max];
	if (knownP[n] != 0)
		return knownP[n];
	int a = n;
	if (n < 0)
		return 0;
	if (n > 1)
		a = P(n - 1) + 2 * P(n - 2);
	return knownP[n] = a;
} // end function P