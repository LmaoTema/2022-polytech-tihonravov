Ответы на вопросы:
1)$ ps -eaf
Lenovo     829       1 ?        22:44:54 /usr/bin/mintty


2) Значение текущего Shell-процесса:  ps -p $$
      PID    PPID    PGID     WINPID   TTY         UID    STIME COMMAND
      830     829     830      10444  pty0      197609 22:44:55 /usr/bin/bash

3)ps -a --all
      PID    PPID    PGID     WINPID   TTY         UID    STIME COMMAND
      829       1     829       5352  ?         197609 22:44:54 /usr/bin/mintty
      830     829     830      10444  pty0      197609 22:44:55 /usr/bin/bash
      887     830     887       4988  pty0      197609 22:47:01 /usr/bin/ps


