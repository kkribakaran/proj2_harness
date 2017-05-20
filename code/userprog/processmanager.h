// processmanager.h
//  The process manager is responsible for keeping track of the currently
//	running processes.
//

#ifndef PROCESSMANAGER_H
#define PROCESSMANAGER_H

#include "bitmap.h"

#define MAX_PROCESSES 8

class ProcessManager {

public:
    ProcessManager();
    ~ProcessManager();

    int allocPid();         // Allocate a new PID
    void freePid(int pid);  // Free an allocated PID

private:
    BitMap *processesBitMap;           // Table to keep track of PIDs
    PCB** pcbList;
    Condition** conditionList;
    Lock** lockList;
    AddrSpace** addrSpaceList;
    int numAvailPIDs;

};

#endif // PROCESSMANAGER_H
