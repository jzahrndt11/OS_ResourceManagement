CS Project 5 - Resource Management

INFO:
        - The simulated os generates new processes for 5 real life seconds and uses message queues to request, allocate, and release recources to try and create a deadlock then uses deadlock
                detection to detect the workers that our in a deadlock then I choose to kill the lowest entry number since its been in the system the longest.


TO COMPILE:      make

TO RUN:         ./oss -n [# of workers] -s [# of simultaneous workers] -t [timeToLauchNewChild] -f [logFile name]

                example1:       ./oss -n 5 -s 3 -t 500000000 -f fileName.txt
                example2:       ./oss -n 10 -s 5 -t 500000000 -f fun.txt

FOR HELP: ./oss -h
