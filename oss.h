// Jeremy Zahrndt
// Project 5 - oss.h
// CS-4760 - Operating Systems


// global variables
#define SHMKEY  97805246 // Parent and child agree on common key
#define oneSecond 1000000000 // 1s in ns
#define MAX_RS 10 // max resources = 10
#define MAX_IN 20 // max instances of each resource = 20
#define MAX_PROC 1000


// simulated clock structure
struct Clock {
        int seconds;
        int nanoSeconds;
};


// message queue structure
typedef struct msgbuffer {
        long mtype; //Important: this store the type of message, and that is used to direct a message to a particular process (address)
        int reqOrRel; //Request or Release given resouces (0 for request, 1 for release)
        int resourceNum; //Resource 0-9 (10 resources)
        pid_t cPid; // hold process ID of worker sending the message
} msgbuffer;
