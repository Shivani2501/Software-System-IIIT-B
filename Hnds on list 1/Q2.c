/*
============================================================================
Name : 2.c
Author : Shivani Sanjiv Shukla
Description : Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
              identify all the process related information in the corresponding proc directory.
Date: 31st Aug, 2024.
============================================================================
*/
#include<stdio.h>

int main(){
int i=0;
	while(i<1)
	{
	printf("Hi");
	}

	return 0;
}
/* Output
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~/ss$ ps aux |grep Q2
shivani+   90499 33.8  0.0   2616  1152 pts/0    R+   19:07   0:08 ./Q2
shivani+   90524  0.0  0.0   9072  2304 pts/1    S+   19:07   0:00 grep --color=auto Q2
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~/ss$ ls -ltr -i /proc/90499
total 0
851400 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:07 status
851399 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:07 stat
851401 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:07 environ
851402 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:07 cmdline
850162 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 wchan
850175 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 uid_map
850180 -rw-rw-rw-  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 timerslack_ns
850179 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 timers
850144 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 timens_offsets
850133 dr-xr-xr-x  3 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 task
850146 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 syscall
850147 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 statm
850163 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 stack
850159 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 smaps_rollup
850158 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 smaps
850178 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 setgroups
850172 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 sessionid
850164 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 schedstat
850142 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 sched
850152 lrwxrwxrwx  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 root -> /
850177 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 projid_map
850140 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 personality
850181 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 patch_state
850160 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 pagemap
850170 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 oom_score_adj
850168 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 oom_score
850169 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 oom_adj
850149 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 numa_maps
850137 dr-x--x--x  2 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 ns
850138 dr-xr-xr-x 59 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 net
850156 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 mountstats
850154 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 mounts
850155 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 mountinfo
850150 -rw-------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 mem
850148 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 maps
850135 dr-x------  2 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 map_files
850171 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 loginuid
850141 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 limits
850184 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 ksm_stat
850183 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 ksm_merging_pages
850174 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 io
850176 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 gid_map
850136 dr-xr-xr-x  2 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 fdinfo
850134 dr-x------  2 shivani-sanjiv-shukla shivani-sanjiv-shukla 3 Aug 31 19:08 fd
850153 lrwxrwxrwx  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 exe -> /home/shivani-sanjiv-shukla/ss/Q2
850151 lrwxrwxrwx  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 cwd -> /home/shivani-sanjiv-shukla/ss
850165 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 cpuset
850167 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 cpu_resctrl_groups
850173 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 coredump_filter
850145 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 comm
850157 --w-------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 clear_refs
850166 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 cgroup
850139 -r--------  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 auxv
850143 -rw-r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 autogroup
850161 dr-xr-xr-x  2 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 attr
850182 -r--r--r--  1 shivani-sanjiv-shukla shivani-sanjiv-shukla 0 Aug 31 19:08 arch_status
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~/ss$ ls -ltr -i /proc/90499^C
shivani-sanjiv-shukla@shivani-sanjiv-shukla-82K2:~/ss$     
*/


