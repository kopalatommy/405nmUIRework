#ifndef GLOBALDEFINITIONS_H
#define GLOBALDEFINITIONS_H

#include <QtGlobal>

// This class holds global definitons such as working dir

#ifdef Q_OS_WIN
//#define WORKING_DIR "D:\\_Work\\405WorkingDir\\"
#define WORKING_DIR "D:/_Work/405WorkingDir/"
#else
#define WORKING_DIR "/home/pi/"
#endif

#endif // GLOBALDEFINITIONS_H
