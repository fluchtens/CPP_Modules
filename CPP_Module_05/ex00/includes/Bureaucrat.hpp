/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:23:22 by fluchten          #+#    #+#             */
/*   Updated: 2023/05/04 18:58:30 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BREAUCRAT_HPP
# define BREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	protected:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& rhs);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		virtual ~Bureaucrat(void);

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif