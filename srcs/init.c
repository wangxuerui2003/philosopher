/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wxuerui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:04:03 by wxuerui           #+#    #+#             */
/*   Updated: 2023/01/11 16:41:32 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/**
 * @brief Take the arguments from command line, in the order of:
 * number_of_philosophers, time_to_die, time_to_eat, time_to_sleep,
 * [number_of_time_must_eat].
 * 
 * @param ac argc
 * @param av argv
 * @return t_args* Return a struct of args back to the main function
 */
t_args	*take_input(int ac, char **av)
{
	t_args	*args;

	if (ac != 5 && ac != 6)
		return (NULL);
	args = malloc(sizeof(t_args));
	if (args == NULL)
		return (NULL);
	if (!(ft_isposint(av[1]) && ft_isposint(av[2])
			&& ft_isposint(av[3]) && ft_isposint(av[4])))
		return (NULL);
	args->num_philo = ft_atoi(av[1]);
	args->time_die = ft_atoi(av[2]);
	args->time_eat = ft_atoi(av[3]);
	args->time_sleep = ft_atoi(av[4]);
	args->must_eat = -1;
	if (ac == 6)
	{
		if (ft_isposint(av[5]) == 0)
			return (NULL);
		args->must_eat = ft_atoi(av[5]);
	}
	return (args);
}
