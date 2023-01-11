/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wxuerui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:03:19 by wxuerui           #+#    #+#             */
/*   Updated: 2023/01/11 16:16:02 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_args	*args;
	t_philo	*philos;
	t_fork	*forks;

	// TODO: check and take input
	if (ac != 5 && ac != 6)
		return (EXIT_FAILURE);
	args = take_input(ac, av);
	if (args == NULL)
		return (EXIT_FAILURE);
	

	// TODO: create philosophers and forks, then start the routine

	// TODO: main thread wait for the philosophers to end

	return (0);
}