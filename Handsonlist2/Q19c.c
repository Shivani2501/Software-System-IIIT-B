shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~$ strace mknod fifomy p
execve("/usr/bin/mknod", ["mknod", "fifomy", "p"], 0x7ffe83683d90 /* 44 vars */) = 0
brk(NULL)                               = 0x563df4d08000
arch_prctl(0x3001 /* ARCH_??? */, 0x7ffca1de9ed0) = -1 EINVAL (Invalid argument)
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fbd7c541000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=71047, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 71047, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fbd7c52f000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libselinux.so.1", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=174472, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 181928, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fbd7c502000
mmap(0x7fbd7c508000, 114688, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x6000) = 0x7fbd7c508000
mmap(0x7fbd7c524000, 28672, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7fbd7c524000
mmap(0x7fbd7c52b000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x29000) = 0x7fbd7c52b000
mmap(0x7fbd7c52d000, 5800, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fbd7c52d000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0P<\2\0\0\0\0\0"..., 832) = 832
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=2072888, ...}, AT_EMPTY_PATH) = 0
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
mmap(NULL, 2117488, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fbd7c200000
mmap(0x7fbd7c222000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7fbd7c222000
mmap(0x7fbd7c39a000, 360448, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7fbd7c39a000
mmap(0x7fbd7c3f2000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1f1000) = 0x7fbd7c3f2000
mmap(0x7fbd7c3f8000, 53104, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fbd7c3f8000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libpcre2-8.so.0", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 832) = 832
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=625344, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 627472, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fbd7c468000
mmap(0x7fbd7c46a000, 438272, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x2000) = 0x7fbd7c46a000
mmap(0x7fbd7c4d5000, 176128, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x6d000) = 0x7fbd7c4d5000
mmap(0x7fbd7c500000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x97000) = 0x7fbd7c500000
close(3)                                = 0
mmap(NULL, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fbd7c465000
arch_prctl(ARCH_SET_FS, 0x7fbd7c465800) = 0
set_tid_address(0x7fbd7c465ad0)         = 153171
set_robust_list(0x7fbd7c465ae0, 24)     = 0
rseq(0x7fbd7c466120, 0x20, 0, 0x53053053) = 0
mprotect(0x7fbd7c3f2000, 16384, PROT_READ) = 0
mprotect(0x7fbd7c500000, 4096, PROT_READ) = 0
mprotect(0x7fbd7c52b000, 4096, PROT_READ) = 0
mprotect(0x563df347a000, 4096, PROT_READ) = 0
mprotect(0x7fbd7c576000, 8192, PROT_READ) = 0
prlimit64(0, RLIMIT_STACK, NULL, {rlim_cur=8192*1024, rlim_max=RLIM64_INFINITY}) = 0
munmap(0x7fbd7c52f000, 71047)           = 0
statfs("/sys/fs/selinux", 0x7ffca1de9ea0) = -1 ENOENT (No such file or directory)
statfs("/selinux", 0x7ffca1de9ea0)      = -1 ENOENT (No such file or directory)
getrandom("\xdc\x52\xaa\xd8\x2d\xb4\x7a\x74", 8, GRND_NONBLOCK) = 8
brk(NULL)                               = 0x563df4d08000
brk(0x563df4d29000)                     = 0x563df4d29000
openat(AT_FDCWD, "/proc/filesystems", O_RDONLY|O_CLOEXEC) = 3
newfstatat(3, "", {st_mode=S_IFREG|0444, st_size=0, ...}, AT_EMPTY_PATH) = 0
read(3, "nodev\tsysfs\nnodev\ttmpfs\nnodev\tbd"..., 1024) = 407
read(3, "", 1024)                       = 0
close(3)                                = 0
access("/etc/selinux/config", F_OK)     = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/lib/locale/locale-archive", O_RDONLY|O_CLOEXEC) = 3
newfstatat(3, "", {st_mode=S_IFREG|0644, st_size=5716304, ...}, AT_EMPTY_PATH) = 0
mmap(NULL, 5716304, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fbd7bc00000
close(3)                                = 0
mknodat(AT_FDCWD, "fifomy", S_IFIFO|0666) = 0
close(1)                                = 0
close(2)                                = 0
exit_group(0)                           = ?
+++ exited with 0 +++

