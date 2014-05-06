#include "../folk.h"
#define VINTAGE_CPI_TRK1_LEN 3720115
struct vintage_track vintage_cpi_trk1 = {
	.name = "Asan Ishq Namaz",
	.len  = VINTAGE_CPI_TRK1_LEN,
	.data = {
#include "trk1data.h"
	}
};
