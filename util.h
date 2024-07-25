#ifndef LOG_H
#define LOG_H

#include <stdio.h>

#define ASSERT_ON_COMPILE(expn) typedef char _C_ASSERT_[(expn) ? 1 : -1]

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

#define LOG(msg, ...) printf(msg "\n", ##_VA_ARGS_)
#define LOG_ERROR(msg, ...) printf(msg "\n", ##_VA_ARGS_)

#endif
