
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_EnumSet$1__
#define __java_util_EnumSet$1__

#pragma interface

#include <java/util/EnumSet.h>

class java::util::EnumSet$1 : public ::java::util::EnumSet
{

public: // actually package-private
  EnumSet$1();
public:
  jboolean EnumSet$1$add(::java::lang::Enum *);
  jboolean addAll(::java::util::Collection *);
  void clear();
  jboolean contains(::java::lang::Object *);
  jboolean containsAll(::java::util::Collection *);
  ::java::util::Iterator * iterator();
  jboolean remove(::java::lang::Object *);
  jboolean removeAll(::java::util::Collection *);
  jboolean retainAll(::java::util::Collection *);
  jint size();
  jboolean add(::java::lang::Object *);
  static ::java::lang::Class class$;
};

#endif // __java_util_EnumSet$1__