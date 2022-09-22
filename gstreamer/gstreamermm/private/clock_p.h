// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_CLOCK_P_H
#define _GSTREAMERMM_CLOCK_P_H


#include <glibmm/class.h>

namespace Gst
{

class Clock_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Clock;
  using BaseObjectType = GstClock;
  using BaseClassType = GstClockClass;
  using CppClassParent = Object_Class;
  using BaseClassParent = GstObjectClass;

  friend class Clock;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static GstClockTime change_resolution_vfunc_callback(GstClock* self, GstClockTime old_resolution, GstClockTime new_resolution);
  static GstClockTime get_resolution_vfunc_callback(GstClock* self);
  static GstClockTime get_internal_time_vfunc_callback(GstClock* self);
  static GstClockReturn wait_vfunc_callback(GstClock* self, GstClockEntry* entry, GstClockTimeDiff* jitter);
  static GstClockReturn wait_async_vfunc_callback(GstClock* self, GstClockEntry* entry);
  static void unschedule_vfunc_callback(GstClock* self, GstClockEntry* entry);
};


} // namespace Gst

#include <gstreamermm/private/object_p.h>


#endif /* _GSTREAMERMM_CLOCK_P_H */
