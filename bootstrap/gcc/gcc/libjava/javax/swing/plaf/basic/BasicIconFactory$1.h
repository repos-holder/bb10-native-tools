
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicIconFactory$1__
#define __javax_swing_plaf_basic_BasicIconFactory$1__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Graphics;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicIconFactory$1;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicIconFactory$1 : public ::java::lang::Object
{

public: // actually package-private
  BasicIconFactory$1();
public:
  virtual jint getIconHeight();
  virtual jint getIconWidth();
  virtual void paintIcon(::java::awt::Component *, ::java::awt::Graphics *, jint, jint);
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicIconFactory$1__
