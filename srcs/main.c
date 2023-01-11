/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wxuerui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:03:19 by wxuerui           #+#    #+#             */
/*   Updated: 2023/01/11 16:22:48 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_args	*args;
	t_philo	*philos;
	t_fork	*forks;

	// TODO: check and take input
	args = take_input(ac, av);
	if (args == NULL)
		return (EXIT_FAILURE);

	// TODO: create philosophers and forks, then start the routine
	forks = create_forks(args);
	if (forks == NULL)
		return (EXIT_FAILURE);
	philos = create_philos(args, forks);
	if (philos == NULL)
		return (EXIT_FAILURE);
	routine(philos, args);

	// TODO: main thread wait for the philosophers to end
	wait_for_philos();

	return (0);
}