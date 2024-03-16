int	ft_isalnum(int c)
{
	if (((c <= 'A' && c >= 'z') || (c <= 'a' && c >= 'z)) || (c <= '0' && c >= '9'))
		return (1);
	return (0);
}
