// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/navigation.h>
#include <gstreamermm/private/navigation_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008-2016 The gstreamermm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gstreamermm/structure.h>
#include <gst/video/video-enumtypes.h>

namespace Gst
{

void Navigation_Class::send_event_vfunc_callback(GstNavigation* self, GstStructure* structure)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->send_event_vfunc(Gst::Structure(structure));
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->send_event)
    (*base->send_event)(self, structure);

}
void Gst::Navigation::send_event_vfunc(Gst::Structure&& structure)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->send_event)
    (*base->send_event)(gobj(), structure ? structure.release() : nullptr);
}

} // namespace Gst

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::NavigationCommand>::value_type()
{
  return gst_navigation_command_get_type();
}

// static
GType Glib::Value<Gst::NavigationEventType>::value_type()
{
  return gst_navigation_event_type_get_type();
}

// static
GType Glib::Value<Gst::NavigationMessageType>::value_type()
{
  return gst_navigation_message_type_get_type();
}

// static
GType Glib::Value<Gst::NavigationQueryType>::value_type()
{
  return gst_navigation_query_type_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::Navigation> wrap(GstNavigation* object, bool take_copy)
{
  return Glib::RefPtr<Gst::Navigation>( dynamic_cast<Gst::Navigation*> (Glib::wrap_auto_interface<Gst::Navigation> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gst
{


/* The *_Class implementation: */

const Glib::Interface_Class& Navigation_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Navigation_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gst_navigation_get_type();
  }

  return *this;
}

void Navigation_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->send_event = &send_event_vfunc_callback;
  
}


Glib::ObjectBase* Navigation_Class::wrap_new(GObject* object)
{
  return new Navigation((GstNavigation*)(object));
}


/* The implementation: */

Navigation::Navigation()
:
  Glib::Interface(navigation_class_.init())
{}

Navigation::Navigation(GstNavigation* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Navigation::Navigation(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Navigation::Navigation(Navigation&& src) noexcept
: Glib::Interface(std::move(src))
{}

Navigation& Navigation::operator=(Navigation&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Navigation::~Navigation() noexcept
{}

// static
void Navigation::add_interface(GType gtype_implementer)
{
  navigation_class_.init().add_interface(gtype_implementer);
}

Navigation::CppClassType Navigation::navigation_class_; // initialize static member

GType Navigation::get_type()
{
  return navigation_class_.init().get_type();
}


GType Navigation::get_base_type()
{
  return gst_navigation_get_type();
}


void Navigation::send_event(Gst::Structure& structure)
{
  gst_navigation_send_event(gobj(), structure.gobj());
}

void Navigation::send_key_event(const Glib::ustring& event, const Glib::ustring& key)
{
  gst_navigation_send_key_event(gobj(), event.c_str(), key.c_str());
}

void Navigation::send_mouse_event(const Glib::ustring& event, int button, double x, double y)
{
  gst_navigation_send_mouse_event(gobj(), event.c_str(), button, x, y);
}

void Navigation::send_command(Gst::NavigationCommand command)
{
  gst_navigation_send_command(gobj(), ((GstNavigationCommand)(command)));
}


} // namespace Gst

