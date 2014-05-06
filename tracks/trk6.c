#include "../folk.h"
#define VINTAGE_CPI_TRK6_LEN 8742890
struct vintage_track vintage_cpi_trk6 = {
	.name = "Waje Allah Wali Taar",
	.len  = VINTAGE_CPI_TRK6_LEN,
	.data = {
#include "trk6data.h"
	}
};
