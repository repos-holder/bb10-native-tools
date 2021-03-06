
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_sound_sampled_gstreamer_lines_GstPipeline__
#define __gnu_javax_sound_sampled_gstreamer_lines_GstPipeline__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
        class Pointer;
    }
    namespace javax
    {
      namespace sound
      {
        namespace sampled
        {
          namespace gstreamer
          {
            namespace lines
            {
                class GstPipeline;
                class GstPipeline$State;
            }
          }
        }
      }
    }
  }
}

class gnu::javax::sound::sampled::gstreamer::lines::GstPipeline : public ::java::lang::Object
{

public:
  GstPipeline();
  GstPipeline(jint);
  virtual void createForWrite();
  virtual ::gnu::javax::sound::sampled::gstreamer::lines::GstPipeline$State * getState();
  virtual void close();
  virtual void setState(::gnu::javax::sound::sampled::gstreamer::lines::GstPipeline$State *);
  virtual ::gnu::classpath::Pointer * getNativeClass();
  virtual jint write(JArray< jbyte > *, jint, jint);
  virtual jint read(JArray< jbyte > *, jint, jint);
  virtual jint available();
  virtual void drain();
  virtual void flush();
private:
  void closePipe();
  void prepareWrite();
  static void init_id_cache();
  static jboolean set_state(::gnu::classpath::Pointer *, jint);
  static jint available(::gnu::classpath::Pointer *, jint);
  static void open_native_pipe(::gnu::classpath::Pointer *, jint);
  static void close_native_pipe(::gnu::classpath::Pointer *);
  void init_instance();
  jboolean create_named_pipe(::gnu::classpath::Pointer *);
  jlong detect_pipe_size();
public: // actually package-private
  static ::gnu::classpath::Pointer * access$0(::gnu::javax::sound::sampled::gstreamer::lines::GstPipeline *);
  static void access$1(::gnu::classpath::Pointer *);
  static JArray< jint > * $SWITCH_TABLE$gnu$javax$sound$sampled$gstreamer$lines$GstPipeline$State();
private:
  static const jint READ = 0;
  static const jint WRITE = 1;
  static const jint QUEUED = 1;
  static ::java::lang::String * CAPACITY_KEY;
  static JArray< ::java::lang::Object * > * lock;
public: // actually protected
  ::java::util::prefs::Preferences * __attribute__((aligned(__alignof__( ::java::lang::Object)))) prefs;
private:
  jlong capacity;
  ::gnu::javax::sound::sampled::gstreamer::lines::GstPipeline$State * state;
  ::java::lang::String * name;
  ::java::io::FileOutputStream * output;
  jboolean source;
  jboolean ready;
  ::gnu::classpath::Pointer * pipeline;
  static JArray< jint > * $SWITCH_TABLE$gnu$javax$sound$sampled$gstreamer$lines$GstPipeline$State__;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_sound_sampled_gstreamer_lines_GstPipeline__
