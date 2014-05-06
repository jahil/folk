#include "../folk.h"
#define VINTAGE_CPI_TRK2_LEN 5867178
struct vintage_track vintage_cpi_trk2 = {
	.name = "Ghoom Charakhreya",
	.len  = VINTAGE_CPI_TRK2_LEN,
	.data = {
#include "trk2data.h"
	}
};
