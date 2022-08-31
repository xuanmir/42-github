/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:12:54 by xuanmir           #+#    #+#             */
/*   Updated: 2022/09/01 00:24:05 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
#include <stdio.h>

// int	isdigit(int c);
// int	isspace(int c);

int	ft_ischarspace(char c)
{
	if (((c >= 9) && (c <= 13)) || (c == 32))
		return (1);
	else
		return (0);
}

int	ft_countneg(char *str)
{
	int	index;
	int	countneg;

	index = 0;
	countneg = 0;
	while (str[index])
	{
		if (str[index] == '-')
			countneg = countneg + 1;
		index = index + 1;
	}
	return (countneg);
}

int	ft_ischardigit(char c);

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	number;

	index = 0;
	sign = 1;
	number = 42;
	printf("input:[%s]\n", str);						// This must be erased!!!
	while (str[index])
	{
		if (ft_ischarspace(str[index]) == 0)
			return (0);
		while (str[index] == '+' || str[index] == '-')
		{
			if (str[index] == '-')
				sign = sign * -1;
			index = index + 1;
		}
		while ((str[index] >= 0) && (str[index] <= 9))
		{
			number = (str[index] - '0') + (number * 10);
			index = index + 1;
		}
		// if ()
		// 	return (number * sign);
		index = index + 1;
	}
	return (0);
}

// int	ft_atoi(char *str)
// {
// 	int	index;
// 	int	countneg;
// 	int	number;

// 	index = 0;
// 	countneg = 0;
// 	printf("input:[%s]\n", str);						// This must be erased!!!
// 	while (str[index])
// 	{
// 		if (ft_ischarspace(str[index]) == 0)
// 			return (0);
// 		while (str[index] == '+' || str[index] == '-')
// 		{
// 			if (str[index] == '-')
// 				countneg = countneg + 1;
// 			index = index + 1;
// 		}
// 		// while ((str[index] >= 0) && (str[index] <= 9))
// 		// {

// 		// }
// 		if ((countneg % 2) != 0)
// 			number = number * -1;
// 		index = index + 1;
// 	}
// 	return (0);
// }

// int	ft_atoi(char *str)
// {
// 	int	sign;
// 	int	number;

// 	sign = 1;
// 	number = 0;
// 	if (*str == '-')
// 	{
// 		sign = sign * -1;
// 		str = str + 1;
// 	}
// 	while (*str)
// 	{
// 		number = (*str - '0') + (number * 10);
// 		str = str + 1;
// 	}
// 	return (number * sign);
// }

int	ft_chartoint(char c)
{
	return ((int)(c + '0'));
}

/*
isdigit()
	Checks for a digit (0 through 9).

	48	'0'		zero
	49	'1'		one
	50	'2'		two
	51	'3'		three
	52	'4'		four
	53	'5'		five
	54	'6'		six
	55	'7'		seven
	56	'8'		eight
	57	'9'		nine

isspace()
	Checks for white-space characters.
	In the "C" and "POSIX" locales, these are:
	9	'\t'	horizontal tab
	10	'\n'	new-line
	11	'\v'	vertical tab
	12	'\f'	form-feed
	13	'\r'	carriage return
	32	' '		space

RETURN VALUE
	The values returned are nonzero if the character c falls into
	the tested class, and zero if not.

NOTES
	The standards require that the argument c for these functions is
	either EOF or a value that is representable in the type unsigned char.
	If the argument c is of type char, it must be cast to unsigned char,
	as in the following example:

		char c;
		...
		res = toupper((unsigned char) c);

	This is necessary because char may be the equivalent of signed char,
	in which case a byte where the top bit is set would be sign extended
	when converting to int, yielding a value that is outside the range
	of unsigned char.

	The details of what characters belong to which class depend on the locale.
	For example, isupper() will not recognize an A-umlaut (Ä) as an uppercase
	letter in the default C locale.
*/

/*
DESCRIPTION
	The atoi() function converts the initial portion of the string
	pointed to by nptr to int.

RETURN VALUE
	The converted value.
*/
