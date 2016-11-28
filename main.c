#include "fdf.h"

int     main()
{
    mlx_t	mlx;
	cor_t	cor;
	

	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, 600, 600, "FDF");
	cor = set_cor(100, 100, 400, 400);
	bresenham(cor, mlx);
	mlx_loop(mlx.mlx);
}