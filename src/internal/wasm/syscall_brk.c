#include <errno.h>
#include "syscall.h"

long __syscall_brk(long arg1, long arg2, long arg3,
                   long arg4, long arg5, long arg6)
{
	return -ENOSYS;
}
