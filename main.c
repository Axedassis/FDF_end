/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:27:04 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/01/30 21:17:50 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, const char **argv)
{
	if (argc == 2)
	{
		t_mlx	*mlx;
		const char *path_file;

		path_file = argv[1];
		mlx = init_fdf(path_file);
		init_mlx(mlx);
		printf ("[LOG]: MAP_ROW: %d | MAP_COLUMN: %d\n", mlx->map.max_x, mlx->map.max_y);
		mlx_loop(mlx->mlx);
	}
	else
		error_exit("Number of invalid arguments, maximum 1", 1);
	return (0);
}
