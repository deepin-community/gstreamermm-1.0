// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_TOCSETTER_P_H
#define _GSTREAMERMM_TOCSETTER_P_H


#include <glibmm/private/interface_p.h>

namespace Gst
{

class TocSetter_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = TocSetter;
  using BaseObjectType = GstTocSetter;
  using BaseClassType = GstTocSetterInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class TocSetter;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gst


#endif /* _GSTREAMERMM_TOCSETTER_P_H */
