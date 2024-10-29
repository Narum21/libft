



int ft_atoi(const char *str)
{
    int nombre;
    int signe;
    int i;

    signe = 1;
    nombre = 0;
    i = 0;

    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            signe = -signe;
        i++;
    }
    while (str[i] && (str[i] <= '9' && str[i] >= '0'))
    {
        nombre = nombre * 10 + (str[i] - '0');
        i++;
        
    }
    return (nombre * signe);
}