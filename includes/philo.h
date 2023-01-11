/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wxuerui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:05:07 by wxuerui           #+#    #+#             */
/*   Updated: 2023/01/11 16:39:18 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>

typedef struct timeval t_timeval;

/**
 * @brief 
 * 
 */
typedef struct {
	pthread_mutex_t	lock;
	int				id;
}	t_fork;

/**
 * @brief 
 * 
 */
typedef struct {
	int	num_philo;
	int	time_die;
	int	time_eat;
	int	time_sleep;
	int	must_eat;
}	t_args;

/**
 * @brief 
 * 
 */
typedef struct {
	pthread_mutex_t	lock;
	int				id;
	pthread_t		tid;
	t_fork			*left_fork;
	t_fork			*right_fork;
	t_args			*args;
	t_timeval		last_eat;
	int				times_ate;
}	t_philo;

int			ft_atoi(char *str);
int			ft_isposint(char *str);
t_args		*take_input(int ac, char **av);

#endif