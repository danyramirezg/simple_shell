#include "header.h"
/**
 * sigint_handler - Signal handler.
 * @sig: signal.
 */

void control_signal(int sig)
{
	(void)sig;
	write(STDOUT_FILENO,"\n", 1);
	write(STDOUT_FILENO, "$ ", 2);
	fflush(stdout);

}
