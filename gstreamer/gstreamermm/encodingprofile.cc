// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/encodingprofile.h>
#include <gstreamermm/private/encodingprofile_p.h>


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
#include <gst/pbutils/encoding-profile.h>
#include <gstreamermm/caps.h>


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::EncodingProfile> wrap(GstEncodingProfile* object, bool take_copy)
{
  return Glib::RefPtr<Gst::EncodingProfile>( dynamic_cast<Gst::EncodingProfile*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& EncodingProfile_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &EncodingProfile_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_encoding_profile_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void EncodingProfile_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* EncodingProfile_Class::wrap_new(GObject* object)
{
  return new EncodingProfile((GstEncodingProfile*)object);
}


/* The implementation: */

GstEncodingProfile* EncodingProfile::gobj_copy()
{
  reference();
  return gobj();
}

EncodingProfile::EncodingProfile(const Glib::ConstructParams& construct_params)
:
  Gst::Object(construct_params)
{

}

EncodingProfile::EncodingProfile(GstEncodingProfile* castitem)
:
  Gst::Object((GstObject*)(castitem))
{}


EncodingProfile::EncodingProfile(EncodingProfile&& src) noexcept
: Gst::Object(std::move(src))
{}

EncodingProfile& EncodingProfile::operator=(EncodingProfile&& src) noexcept
{
  Gst::Object::operator=(std::move(src));
  return *this;
}


EncodingProfile::~EncodingProfile() noexcept
{}


EncodingProfile::CppClassType EncodingProfile::encodingprofile_class_; // initialize static member

GType EncodingProfile::get_type()
{
  return encodingprofile_class_.init().get_type();
}


GType EncodingProfile::get_base_type()
{
  return gst_encoding_profile_get_type();
}


Glib::ustring EncodingProfile::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_encoding_profile_get_name(const_cast<GstEncodingProfile*>(gobj())));
}

Glib::ustring EncodingProfile::get_description() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_encoding_profile_get_description(const_cast<GstEncodingProfile*>(gobj())));
}

Glib::RefPtr<Gst::Caps> EncodingProfile::get_format()
{
  return Glib::wrap(gst_encoding_profile_get_format(gobj()));
}

Glib::RefPtr<const Gst::Caps> EncodingProfile::get_format() const
{
  return Glib::wrap(gst_encoding_profile_get_format(const_cast<GstEncodingProfile*>(gobj())));
}

Glib::ustring EncodingProfile::get_preset() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_encoding_profile_get_preset(const_cast<GstEncodingProfile*>(gobj())));
}

Glib::ustring EncodingProfile::get_preset_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_encoding_profile_get_preset_name(const_cast<GstEncodingProfile*>(gobj())));
}

guint EncodingProfile::get_presence() const
{
  return gst_encoding_profile_get_presence(const_cast<GstEncodingProfile*>(gobj()));
}

Glib::RefPtr<Gst::Caps> EncodingProfile::get_restriction()
{
  return Glib::wrap(gst_encoding_profile_get_restriction(gobj()));
}

Glib::RefPtr<const Gst::Caps> EncodingProfile::get_restriction() const
{
  return const_cast<EncodingProfile*>(this)->get_restriction();
}

Glib::ustring EncodingProfile::get_file_extension() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_encoding_profile_get_file_extension(const_cast<GstEncodingProfile*>(gobj())));
}

void EncodingProfile::set_name(const Glib::ustring& name)
{
  gst_encoding_profile_set_name(gobj(), name.c_str());
}

void EncodingProfile::set_description(const Glib::ustring& name)
{
  gst_encoding_profile_set_description(gobj(), name.c_str());
}

void EncodingProfile::set_enabled(bool enabled)
{
  gst_encoding_profile_set_enabled(gobj(), static_cast<int>(enabled));
}

void EncodingProfile::set_format(const Glib::RefPtr<Gst::Caps>& format)
{
  gst_encoding_profile_set_format(gobj(), Glib::unwrap(format));
}

void EncodingProfile::set_preset(const Glib::ustring& preset)
{
  gst_encoding_profile_set_preset(gobj(), preset.c_str());
}

void EncodingProfile::set_preset_name(const Glib::ustring& preset_name)
{
  gst_encoding_profile_set_preset_name(gobj(), preset_name.c_str());
}

void EncodingProfile::set_restriction(const Glib::RefPtr<Gst::Caps>& restriction)
{
  gst_encoding_profile_set_restriction(gobj(), Glib::unwrap(restriction));
}

void EncodingProfile::set_presence(guint presence)
{
  gst_encoding_profile_set_presence(gobj(), presence);
}

bool EncodingProfile::is_equal(const Glib::RefPtr<Gst::EncodingProfile>& profile2) const
{
  return gst_encoding_profile_is_equal(const_cast<GstEncodingProfile*>(gobj()), Glib::unwrap(profile2));
}

bool EncodingProfile::is_enabled() const
{
  return gst_encoding_profile_is_enabled(const_cast<GstEncodingProfile*>(gobj()));
}

Glib::RefPtr<Gst::Caps> EncodingProfile::get_input_caps() const
{
  return Glib::wrap(gst_encoding_profile_get_input_caps(const_cast<GstEncodingProfile*>(gobj())));
}

Glib::ustring EncodingProfile::get_type_nick() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_encoding_profile_get_type_nick(const_cast<GstEncodingProfile*>(gobj())));
}

bool EncodingProfile::get_allow_dynamic_output() const
{
  return gst_encoding_profile_get_allow_dynamic_output(const_cast<GstEncodingProfile*>(gobj()));
}

void EncodingProfile::set_allow_dynamic_output(bool allow_dynamic_output)
{
  gst_encoding_profile_set_allow_dynamic_output(gobj(), static_cast<int>(allow_dynamic_output));
}


} // namespace Gst


