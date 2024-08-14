/* interval between updates (in ms) */
const unsigned int interval = 60000;
/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";
/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
/* 	function format		argument */

//	{ temp, 		"[TEMP %sC] ",	"/sys/class/thermal/thermal_zone0/temp" },
//	{ ram_used,		"  %s",	NULL },
	//{ datetime, 		" %s ",	"%a %b %d %r" },
//	{ cpu_perc, 	" 🗄️ CPU %s%%  ",NULL},
//	{ ram_perc,	"📟 RAM %s%%  ",NULL},
//	{ netspeed_rx,	"📡 %sB/s  ","wlp2s0" },
//	{ run_command,	"🔊 %1s  ","amixer sget Master | awk -F\"[][]\" '/%/ { print $2 }' | head -n1" },
	{ datetime,	"📅 %s  ","%a, %B %d"},
	{ datetime,	"🕒 %s  ","%I:%M %p"},
	{ battery_perc,	"☠ %s%%","BAT0"},
	{ battery_state,"(%s)","BAT0" },
};

