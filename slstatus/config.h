/* interval between updates (in ms) */
const unsigned int interval = 60000;
/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";
/* maximum output string length */
#define MAXLEN 2048
static const struct arg args[] = {
    /* function format          argument */
    //{datetime, " 🧭 %s |", "%I:%M:%S %p"},
    {datetime, " 📅 %s |", "%a, %B %d"},
    {datetime, " 🧭 %s |", "%I:%M %p"},
    {battery_perc, " 💀 %s%%", "BAT0"},
};

