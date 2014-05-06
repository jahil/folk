#include "../folk.h"
#define VINTAGE_CPI_TRK3_LEN 6350951
struct vintage_track vintage_cpi_trk3 = {
	.name = "Kiya Haal Sunawan Dil Da",
	.len  = VINTAGE_CPI_TRK3_LEN,
	.data = {
#include "trk3data.h"
	}
};
