/*
 * List of cgroup subsystems.
 *
 * DO NOT ADD ANY SUBSYSTEM WITHOUT EXPLICIT ACKS FROM CGROUP MAINTAINERS.
 */
#if IS_ENABLED(CONFIG_CPUSETS)
SUBSYS(cpuset)
#endif

#if IS_ENABLED(CONFIG_CGROUP_SCHED)
SUBSYS(cpu)
#endif

#if IS_ENABLED(CONFIG_CGROUP_CPUACCT)
SUBSYS(cpuacct)
#endif

#if IS_ENABLED(CONFIG_MEMCG)
SUBSYS(memory)
#endif

#if IS_ENABLED(CONFIG_CGROUP_DEVICE)
SUBSYS(devices)
#endif

#if IS_ENABLED(CONFIG_CGROUP_FREEZER)
SUBSYS(freezer)
#endif

#if IS_ENABLED(CONFIG_CGROUP_NET_CLASSID)
SUBSYS(net_cls)
#endif

<<<<<<< HEAD
#if IS_ENABLED(CONFIG_BLK_CGROUP)
SUBSYS(blkio)
=======
#if IS_ENABLED(CONFIG_CGROUP_BFQIO)
SUBSYS(bfqio)
>>>>>>> 4bab54692248... block: cgroups, kconfig, build bits for BFQ-v7r8-3.18.0
#endif

#if IS_ENABLED(CONFIG_CGROUP_PERF)
SUBSYS(perf_event)
#endif

#if IS_ENABLED(CONFIG_CGROUP_NET_PRIO)
SUBSYS(net_prio)
#endif

#if IS_ENABLED(CONFIG_CGROUP_HUGETLB)
SUBSYS(hugetlb)
#endif

/*
 * The following subsystems are not supported on the default hierarchy.
 */
#if IS_ENABLED(CONFIG_CGROUP_DEBUG)
SUBSYS(debug)
#endif
/*
 * DO NOT ADD ANY SUBSYSTEM WITHOUT EXPLICIT ACKS FROM CGROUP MAINTAINERS.
 */
