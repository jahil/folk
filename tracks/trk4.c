#include "../folk.h"
#define VINTAGE_CPI_TRK4_LEN 12613081
struct vintage_track vintage_cpi_trk4 = {
	.name = "Meda Ishq Wi Tu",
	.len  = VINTAGE_CPI_TRK4_LEN,
	.data = {
#include "trk4data.h"
	}
};
