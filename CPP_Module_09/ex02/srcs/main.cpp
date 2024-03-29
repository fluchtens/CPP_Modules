/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:43:37 by fluchten          #+#    #+#             */
/*   Updated: 2023/05/28 20:39:04 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static void print_args(int ac, char **av)
{
	std::cout << "Before: ";
	for (int i = 1; i < ac; i++) {
		std::cout << av[i];
		if (i != ac - 1) {
			std::cout << ' ';
		}
	}
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac < 2) {
		std::cout << "Usage: ./PmergeMe <sequence>" << std::endl; 
		return (1);
	}

	try {
		PmergeMe stack(ac, av);

		print_args(ac, av);
		stack.sortVector();
		stack.sortDeque();
	}
	catch (std::exception &e){
		std::cout << "Error: " << e.what() << "." << std::endl;
		return (1);
	}

	return (0);
}
