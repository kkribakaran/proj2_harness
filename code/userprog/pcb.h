// pcb.h
//  The process control block is a data structure used to keep track of a
//	single user process. For now, each process has an ID, a parent and a
//	pointer to its kernel thread.

#ifndef PCB_H
#define PCB_H

//#include "system.h"
#include "bitmap.h"
#include "useropenfile.h"
//#include "thread.h"

class PCB {

public:
    PCB(int pid, int parentPid);
    ~PCB();
    UserOpenFile* getFile(int fileID); //Returns the open file associated with this PCB with                                            //the specified fileID.
    int status;           //idk what status is nor its type
    Thread* process;       //*edit to be Thread instead of int(idk how?????)
    int pid;            // Process ID
    int parentPid;      // Parent's Process ID
//    Thread *thread;     // Kernel thread that controls this process
    BitMap openFilesBitMap;
    int getPID();
    int addFile(UserOpenFile file);

};

#endif // PCB_H
