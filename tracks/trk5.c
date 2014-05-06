#include "../folk.h"
#define VINTAGE_CPI_TRK5_LEN 5053130
struct vintage_track vintage_cpi_trk5 = {
	.name = "Ni Tenoon Rub Na Bhali",
	.len  = VINTAGE_CPI_TRK5_LEN,
	.data = {
#include "trk5data.h"
	}
};
