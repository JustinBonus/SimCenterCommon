#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H

#include <QString>

namespace SCUtils {

  QString getAppWorkDir();
  bool recursiveCopy(const QString &sourcePath, const QString &destPath);
  bool isSafeToRemoveRecursivily(const QString &directoryPath);
  
}


#endif // FILEOPERATIONS_H
