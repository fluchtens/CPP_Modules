/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:11:10 by fluchten          #+#    #+#             */
/*   Updated: 2023/03/25 16:53:47 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return (1);
	}
	std::string	level = av[1];
	Harl		Harl;

	Harl.complain(level);
	return (0);
}