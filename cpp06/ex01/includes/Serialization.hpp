#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <limits>
# include <stdint.h>
# include <numbers>
# include <iomanip>

typedef struct s_data
{
	int		data_Integer;
	float	data_Float;
	double	data_Double;
	char	data_Char;
}				Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);
#endif /* CONVERT_HPP */
