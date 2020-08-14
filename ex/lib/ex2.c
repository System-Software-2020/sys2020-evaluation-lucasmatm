
#define _DEFAULT_SOURCE
#include <unistd.h>
#include <sys/syscall.h>

#define syscall_no 4

ssize_t write (int fd, const void *buf, size_t n)
{
  int b;
  b = syscall (syscall_no, fd, buf, n);
  return b;
}
