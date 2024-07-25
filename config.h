#ifndef CONFIG_H
#define CONFIG_H

typedef struct Config {
   char *logFile;
   char *deviceFile;
} Config;

void Config_cleanup(Config *config);

#endif
