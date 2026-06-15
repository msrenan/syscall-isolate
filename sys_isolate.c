#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/types.h>
#include <linux/file.h>
#include <linux/pid.h>

long 

int do_isolate(pid_t pid, unsigned int flags, int cgroup_fd,
		unsigned int namespace_flags)
{
	struct fd f;

	// Checks if calling process has sufficient permissions
	if(!capable(CAP_SYS_ADMIN))
		return -EPERM;

	// Gets the fd from the cgroug_fd
	fd = fget(cgroug_fd);

	
}

SYSCALL_DEFINE3(isolate,
		pid_t, pid,
		unsigned int, flags,
		int, cgroug_fd,
		unsigned int, namespace_flags)
{
	return	do_isolate();
}



