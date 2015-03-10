#include <helpers.h>
#include <unistd.h>

#define BUF_SIZE 4096

char buf[BUF_SIZE];

int main() {
	for (;;) {
		ssize_t rd = read_(STDIN_FILENO, buf, BUF_SIZE);
		if (rd <= 0 || write_(STDOUT_FILENO, buf, rd) == -1)
			break;
	}
}