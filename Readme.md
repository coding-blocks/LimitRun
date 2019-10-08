# Usage
Repository is used for Checking the Limiting Resource Usage in CPP

# Concepts Used
You can specify limits for the resource usage of a process. When the process tries to exceed a limit, it may get a signal, or the system call by which it tried to do so may fail, depending on the resource. Each process initially inherits its limit values from its parent, but it can subsequently change them.

There are two per-process limits associated with a resource:
<ul>
<li>current limit</li>
The current limit is the value the system will not allow usage to exceed. It is also called the “soft limit” because the process being limited can generally raise the current limit at will.

<li>maximum limit</li>
The maximum limit is the maximum value to which a process is allowed to set its current limit. It is also called the “hard limit” because there is no way for a process to get around it. A process may lower its own maximum limit, but only the superuser may increase a maximum limit.
</ul>

```
The symbols for use with getrlimit, setrlimit, getrlimit64, and setrlimit64 are defined in sys/resource.h.
```
