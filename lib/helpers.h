#ifndef HELPERS_H
#define HELPERS_H

#include <sys/types.h>

ssize_t read_(int fd, void* buf, size_t size);
ssize_t write_(int fd, const void* buf, size_t size);

#endif