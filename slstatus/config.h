/* interval between updates (in ms) */
const unsigned int interval = 60000;
/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";
/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
/* 	function format		argument */

//	{ temp, 		"[TEMP %sC] ",	"/sys/class/thermal/thermal_zone0/temp" },
//	{ vol_perc,		"[VOL %s%] ",	"/dev/mixer1" },
//	{ datetime,		" 🧭 %s |",	"%I:%M:%S %p"},
//	{ cpu_perc,		"  %s%% |",	NULL },
//	{ ram_used,		"  %s",	NULL },
//	{ ram_perc,		" (%s%%) |",	NULL },
	{ datetime,		" 📅 %s |",	"%a, %B %d"},
	{ datetime,		" 🧭 %s |",	"%I:%M %p"},
	{ battery_perc,		" 💀 %s%%",	"BAT0"},
	{ battery_state,	"(%s)",		"BAT0" },
};

