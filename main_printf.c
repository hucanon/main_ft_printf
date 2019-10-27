/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcanon <hugo@frogames.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:33:35 by hcanon            #+#    #+#             */
/*   Updated: 2019/10/24 06:52:04 by hcanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	*str;

	str = "yayo";
	ft_printf("1:\n");
	ft_printf("ft_printf = \"%x\"\n", -42);
	printf("   printf = \"%x\"\n\n", -42);
	ft_printf("2:\n");
	ft_printf("ft_printf = \"%.10d\"\n", 4242);
	printf("   printf = \"%.10d\"\n\n", 4242);
	ft_printf("3:\n");
	ft_printf("ft_printf = \"%.10s\"\n", "yoyo");
	printf("   printf = \"%.10s\"\n\n", "yoyo");
	ft_printf("4:\n");
	ft_printf("ft_printf = \"%3.10d\"\n", 4242);
	printf("   printf = \"%3.10d\"\n\n", 4242);
	ft_printf("5:\n");
	ft_printf("ft_printf = \"%3.10s\"\n", "yoyo");
	printf("   printf = \"%3.10s\"\n\n", "yoyo");
	ft_printf("6:\n");
	ft_printf("ft_printf = \"%15.10d\"\n", 4242);
	printf("   printf = \"%15.10d\"\n\n", 4242);
	ft_printf("7:\n");
	ft_printf("ft_printf = \"%15.10s\"\n", "yoyo");
	printf("   printf = \"%15.10s\"\n\n", "yoyo");
	ft_printf("8:\n");
	ft_printf("ft_printf = \"%03.10d\"\n", 4242);
	printf("   printf = \"%03.10d\"\n\n", 4242);
	ft_printf("9:\n");
	ft_printf("ft_printf = \"%-3.10s\"\n", "yoyo");
	printf("   printf = \"%-3.10s\"\n\n", "yoyo");
	ft_printf("10:\n");
	ft_printf("ft_printf = \"%015.10d\"\n", 4242);
	printf("   printf = \"%015.10d\"\n\n", 4242);
	ft_printf("11:\n");
	ft_printf("ft_printf = \"%-15.10s\"\n", "yayo");
	printf("   printf = \"%-15.10s\"\n\n", "yayo");
	ft_printf("12:\n");
	ft_printf("ft_printf = \"%-5.2s\"\n", "yayo");
	printf("   printf = \"%-5.2s\"\n\n", "yayo");
	ft_printf("13:\n");
	ft_printf("ft_printf = \"%5.2s\"\n", "yayo");
	printf("   printf = \"%5.2s\"\n\n", "yayo");
	ft_printf("14:\n");
	ft_printf("ft_printf = \"%.2s\"\n", "yayo");
	printf("   printf = \"%.2s\"\n\n", "yayo");
	ft_printf("15:\n");
	ft_printf("ft_printf = \"%010d\"\n", 4242);
	printf("   printf = \"%010d\"\n\n", 4242);
	ft_printf("16:\n");
	ft_printf("ft_printf = \"%%\"\n");
	printf("   printf = \"%%\"\n\n");
	ft_printf("17:\n");
	ft_printf("ft_printf = \"%5%\"\n");
	printf("   printf = \"%5%\"\n\n");
	ft_printf("18:\n");
	ft_printf("ft_printf = \"%-10.6d\"\n", -4242);
	printf("   printf = \"%-10.6d\"\n\n", -4242);
	ft_printf("19:\n");
	ft_printf("ft_printf = \"%03.2d\"\n", -1);
	printf("   printf = \"%03.2d\"\n\n", -1);
	ft_printf("20:\n");
	ft_printf("ft_printf = \"%.10d\"\n", -42);
	printf("   printf = \"%.10d\"\n\n", -42);
	ft_printf("21:\n");
	ft_printf("ft_printf = \"%-0.5%\"\n");
	printf("   printf = \"%-0.5%\"\n\n");
	ft_printf("22:\n");
	ft_printf("ft_printf = \"%-5c\"\n", 'X');
	printf("   printf = \"%-5c\"\n\n", 'X');
	ft_printf("23:\n");
	ft_printf("ft_printf = \"%05d\"\n", -42);
	printf("   printf = \"%05d\"\n\n", -42);
	ft_printf("24:\n");
	ft_printf("ft_printf = \"%5.x\"\n", 0);
	printf("   printf = \"%5.x\"\n\n", 0);
	ft_printf("25:\n");
	ft_printf("ft_printf = \"%5.0x\"\n", 0);
	printf("   printf = \"%5.0x\"\n\n", 0);
	ft_printf("26:\n");
	ft_printf("ft_printf = \"%-2s\"\n", NULL);
	printf("   printf = \"%-2s\"\n\n", NULL);
	ft_printf("27:\n");
	ft_printf("ft_printf = \"%-10.5d\"\n", 4242);
	printf("   printf = \"%-10.5d\"\n\n", 4242);
	ft_printf("28:\n");
	ft_printf("ft_printf = \"%-10.6s\"\n", "yayo");
	printf("   printf = \"%-10.6s\"\n\n", "yayo");
	ft_printf("29:\n");
	ft_printf("ft_printf = \"%c\"\n", 0);
	printf("   printf = \"%c\"\n\n", 0);
	ft_printf("30:\n");
	ft_printf("ft_printf = \"%2c\"\n", 0);
	printf("   printf = \"%2c\"\n\n", 0);
	ft_printf("31:\n");
	ft_printf("ft_printf = \"null %c and text\"\n", 0);
	printf("   printf = \"null %c and text\"\n\n", 0);
	ft_printf("32:\n");
	ft_printf("ft_printf = \"%.2d\"\n", 4242);
	printf("   printf = \"%.2d\"\n\n", 4242);
	ft_printf("33:\n");
	ft_printf("ft_printf = \"%2.2d\"\n", 4242);
	printf("   printf = \"%2.2d\"\n\n", 4242);
	ft_printf("34:\n");
	ft_printf("ft_printf = \"%5.2d\"\n", 4242);
	printf("   printf = \"%5.2d\"\n\n", 4242);
	ft_printf("35:\n");
	ft_printf("ft_printf = \"%.0%\"\n");
	printf("   printf = \"%.0%\"\n\n");
	ft_printf("36:\n");
	ft_printf("ft_printf = \"%5.x\"\n", 42);
	printf("   printf = \"%5.x\"\n\n", 42);
	ft_printf("37:\n");
	ft_printf("ft_printf = \"%5.0x\"\n", 42);
	printf("   printf = \"%5.0x\"\n\n", 42);
	ft_printf("38:\n");
	ft_printf("ft_printf = \"%5.d\"\n", 0);
	printf("   printf = \"%5.d\"\n\n", 0);
	ft_printf("39:\n");
	ft_printf("ft_printf = \"%5.0d\"\n", 0);
	printf("   printf = \"%5.0d\"\n\n", 0);
	ft_printf("40:\n");
	ft_printf("ft_printf = \"%-2c\"\n", 0);
	printf("   printf = \"%-2c\"\n\n", 0);
	ft_printf("41:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%5.d\"\n", 0));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%5.d\"\n", 0));
	ft_printf("42:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%5.0d\"\n", 0));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%5.0d\"\n", 0));
	ft_printf("43:\n");
	printf("valeur de retour = %d\n", ft_printf("@moulitest: %.d %.0d", 0, 0));
	printf("valeur de retour = %d\n\n", printf("@moulitest: %.d %.0d", 0, 0));
	ft_printf("44:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%p\"\n", str));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%p\"\n", str));
	ft_printf("45:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%5p\"\n", str));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%5p\"\n", str));
	ft_printf("46:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%15p\"\n", str));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%15p\"\n", str));
	ft_printf("47:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%p\"\n", NULL));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%p\"\n", NULL));
	ft_printf("48:\n");
	printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%10p\"\n", NULL));
	printf("valeur de retour = %d\n\n", printf("   printf = \"%10p\"\n", NULL));
	ft_printf("49:\n");
	ft_printf("ft_printf = \"%*.*d\"\n", -10, 5, 42);
	printf("   printf = \"%*.*d\"\n\n", -10, 5, 42);
	ft_printf("50:\n");
	ft_printf("ft_printf = \"%*.*d\"\n", 10, 5, 42);
	printf("   printf = \"%*.*d\"\n\n", 10, 5, 42);
	ft_printf("51:\n");
	ft_printf("ft_printf = \"%--*.*d\"\n", 10, 5, 42);
	printf("   printf = \"%--*.*d\"\n\n", 10, 5, 42);
	ft_printf("52:\n");
	ft_printf("ft_printf = \"%--00*.*d\"\n", 10, 5, 42);
	printf("   printf = \"%--00*.*d\"\n\n", 10, 5, 42);
	ft_printf("53:\n");
	ft_printf("ft_printf = \"%000*.*d\"\n", 10, 5, 42);
	printf("   printf = \"%000*.*d\"\n\n", 10, 5, 42);
	return (0);
}
