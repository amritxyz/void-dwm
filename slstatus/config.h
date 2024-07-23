/* interval between updates (in ms) */
const unsigned int interval = 1000;
/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";
/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
//	{ temp, "[TEMP %sC] ", "/sys/class/thermal/thermal_zone0/temp" },
//	{ cpu_perc, "[CPU %s%] ", NULL },
//	{ ram_perc, "[RAM %s%] ", NULL },
//	{ vol_perc, "[VOL %s%] ", "/dev/mixer1" },
//	{ battery_perc, "[BAT %s%] ", "BAT0" },
//	{ datetime, "[%s]", "%F %r" }
/* function format          argument */
//	{ datetime, " 🧭 %s |", "%I:%M:%S %p"},
//	{ run_command,		" %s ",	vol },
//	{ run_command,		" %s ",	mic },
    { cpu_perc,		"  %s%% |",	NULL },
    { ram_used,		"  %s",	NULL },
    { ram_perc,		" (%s%%) |",	NULL },
    { datetime,		" 📅 %s |",	"%a, %B %d"},
    { datetime,		" 🧭 %s |",	"%I:%M:%S %p"},
    { battery_perc,		" 💀 %s%%",	"BAT0"},
	{ battery_state,	"(%s) ",	"BAT0" },
};

