
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_Semaphore$FairSync__
#define __java_util_concurrent_Semaphore$FairSync__

#pragma interface

#include <java/util/concurrent/Semaphore$Sync.h>

class java::util::concurrent::Semaphore$FairSync : public ::java::util::concurrent::Semaphore$Sync
{

public: // actually package-private
  Semaphore$FairSync(jint);
public: // actually protected
  jint tryAcquireShared(jint);
private:
  static const jlong serialVersionUID = 2014338818796000944LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_Semaphore$FairSync__
