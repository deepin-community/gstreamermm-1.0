// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/plugin.h>
#include <gstreamermm/private/plugin_p.h>


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

#include <gst/gst.h>
#include <gstreamermm/structure.h>


namespace
{

extern "C"
{

gboolean Plugin_Init_gstreamermm_callback(GstPlugin* plugin, void* data)
{
  Gst::Plugin::SlotInit* the_slot = static_cast<Gst::Plugin::SlotInit*>(data);
  bool result = false;

  try
  {
    result = (*the_slot)(Glib::wrap(plugin, true));
    delete the_slot;
    return result;
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return false;
}

} // extern "C"

} // anonymous namespace

namespace Gst
{

bool Plugin::register_static(int major_version, int minor_version,
    const Glib::ustring& name, const Glib::ustring& description,
    const SlotInit& init_slot, const Glib::ustring& version,
    const Glib::ustring& license, const Glib::ustring& source,
    const Glib::ustring& package, const Glib::ustring& origin)
{
  SlotInit* slot_copy = new SlotInit(init_slot);

  return gst_plugin_register_static_full(major_version, minor_version,
    name.c_str(), const_cast<char*>(description.c_str()),
    &Plugin_Init_gstreamermm_callback, version.c_str(), license.c_str(),
    source.c_str(), package.c_str(), origin.c_str(), slot_copy);
}

} //namespace Gst

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::PluginDependencyFlags>::value_type()
{
  return gst_plugin_dependency_flags_get_type();
}

// static
GType Glib::Value<Gst::PluginFlags>::value_type()
{
  return gst_plugin_flags_get_type();
}


Gst::PluginError::PluginError(Gst::PluginError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (GST_PLUGIN_ERROR, error_code, error_message)
{}

Gst::PluginError::PluginError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gst::PluginError::Code Gst::PluginError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gst::PluginError::throw_func(GError* gobject)
{
  throw Gst::PluginError(gobject);
}

// static
GType Glib::Value<Gst::PluginError::Code>::value_type()
{
  return gst_plugin_error_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::Plugin> wrap(GstPlugin* object, bool take_copy)
{
  return Glib::RefPtr<Gst::Plugin>( dynamic_cast<Gst::Plugin*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& Plugin_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Plugin_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_plugin_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Plugin_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Plugin_Class::wrap_new(GObject* object)
{
  return new Plugin((GstPlugin*)object);
}


/* The implementation: */

GstPlugin* Plugin::gobj_copy()
{
  reference();
  return gobj();
}

Plugin::Plugin(const Glib::ConstructParams& construct_params)
:
  Object(construct_params)
{

}

Plugin::Plugin(GstPlugin* castitem)
:
  Object((GstObject*)(castitem))
{}


Plugin::Plugin(Plugin&& src) noexcept
: Object(std::move(src))
{}

Plugin& Plugin::operator=(Plugin&& src) noexcept
{
  Object::operator=(std::move(src));
  return *this;
}


Plugin::~Plugin() noexcept
{}


Plugin::CppClassType Plugin::plugin_class_; // initialize static member

GType Plugin::get_type()
{
  return plugin_class_.init().get_type();
}


GType Plugin::get_base_type()
{
  return gst_plugin_get_type();
}


Glib::QueryQuark Plugin::error_quark()
{
  return Glib::QueryQuark(gst_plugin_error_quark());
}

Glib::ustring Plugin::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_name(const_cast<GstPlugin*>(gobj())));
}

Glib::ustring Plugin::get_description() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_description(const_cast<GstPlugin*>(gobj())));
}

Glib::ustring Plugin::get_filename() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_filename(const_cast<GstPlugin*>(gobj())));
}

Glib::ustring Plugin::get_license() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_license(const_cast<GstPlugin*>(gobj())));
}

Glib::ustring Plugin::get_package() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_package(const_cast<GstPlugin*>(gobj())));
}

Glib::ustring Plugin::get_origin() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_origin(const_cast<GstPlugin*>(gobj())));
}

Glib::ustring Plugin::get_source() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_source(const_cast<GstPlugin*>(gobj())));
}

Glib::ustring Plugin::get_version() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_version(const_cast<GstPlugin*>(gobj())));
}

Glib::ustring Plugin::get_release_date_string() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_plugin_get_release_date_string(const_cast<GstPlugin*>(gobj())));
}

bool Plugin::is_loaded() const
{
  return gst_plugin_is_loaded(const_cast<GstPlugin*>(gobj()));
}

Gst::Structure Plugin::get_cache_data() const
{
  return Glib::wrap(const_cast<GstStructure*>(gst_plugin_get_cache_data(const_cast<GstPlugin*>(gobj()))), true);
}

void Plugin::set_cache_data(Gst::Structure& cache_data)
{
  gst_plugin_set_cache_data(gobj(), cache_data.gobj());
}

Glib::RefPtr<Gst::Plugin> Plugin::load_file(const Glib::ustring& filename)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Gst::Plugin> retvalue = Glib::wrap(gst_plugin_load_file(filename.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<Gst::Plugin> Plugin::load()
{
  return Glib::wrap(gst_plugin_load(gobj()));
}

Glib::RefPtr<Gst::Plugin> Plugin::load_by_name(const Glib::ustring& name)
{
  return Glib::wrap(gst_plugin_load_by_name(name.c_str()));
}

void Plugin::add_dependency(const Glib::StringArrayHandle& env_vars, const Glib::StringArrayHandle& paths, const Glib::StringArrayHandle& names, Gst::PluginDependencyFlags flags)
{
  gst_plugin_add_dependency(gobj(), const_cast<const char**>(env_vars.data()), const_cast<const char**>(paths.data()), const_cast<const char**>(names.data()), ((GstPluginDependencyFlags)(flags)));
}

void Plugin::add_dependency(const Glib::ustring& env_vars, const Glib::ustring& paths, const Glib::ustring& names, Gst::PluginDependencyFlags flags)
{
  gst_plugin_add_dependency_simple(gobj(), env_vars.c_str(), paths.c_str(), names.c_str(), ((GstPluginDependencyFlags)(flags)));
}


} // namespace Gst

