int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*int main(void)
{
	char *str[] = "superescalifragilisticoespialidoso";

	printf("%s" ft_strlen);
	return(0);
}*/