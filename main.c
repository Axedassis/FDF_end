/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:27:04 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/01/31 16:45:07 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, const char **argv)
{
	t_mlx		*mlx;
	const char	*path_file;

	if (argc == 2)
	{
		path_file = argv[1];
		mlx = init_fdf(path_file);
		init_mlx(mlx);
		init_cam(mlx);
		init_render(mlx);
		mlx_loop(mlx->mlx);
	}
	else
		error_exit("Number of invalid arguments, maximum 1", 1);
	return (0);
}
