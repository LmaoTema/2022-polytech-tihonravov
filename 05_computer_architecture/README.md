Ответы на вопросы:<br/>
1)$ ps -eaf<br/>
Lenovo     829       1 ?        22:44:54 /usr/bin/mintty<br/>
<br/>
<br/>
2) Значение текущего Shell-процесса:  ps -p $$<br/>
      PID    PPID    PGID     WINPID   TTY         UID    STIME COMMAND<br/>
      830     829     830      10444  pty0      197609 22:44:55 /usr/bin/bash<br/>
<br/>
3)ps -a --all<br/>
      PID    PPID    PGID     WINPID   TTY         UID    STIME COMMAND<br/>
      829       1     829       5352  ?         197609 22:44:54 /usr/bin/mintty<br/>
      830     829     830      10444  pty0      197609 22:44:55 /usr/bin/bash<br/>
      887     830     887       4988  pty0      197609 22:47:01 /usr/bin/ps<br/>


