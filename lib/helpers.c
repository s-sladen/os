#include "helpers.h"

#include <unistd.h>

ssize_t read_(int fd, void* buf, size_t size) {
	ssize_t total = 0;
	while (total < size) {
		ssize_t rd = read(fd, buf + total, size - total);
		if (rd == -1)
			return -1;
		if (rd == 0)
			break;
		total += rd;
	}
	return total;
}

ssize_t write_(int fd, const void* buf, size_t size) {
	for (ssize_t total = 0; total < size; ) {
		ssize_t wd = write(fd, buf + total, size - total);
		if (wd == -1)
			return -1;
		total += wd;
	}
	return size;
}