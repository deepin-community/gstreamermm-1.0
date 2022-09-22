// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/typefindfactory.h>
#include <gstreamermm/private/typefindfactory_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2009 The gstreamermm Development Team
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

#include <gstreamermm/caps.h>
#include <gstreamermm/typefind.h>


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::TypeFindFactory> wrap(GstTypeFindFactory* object, bool take_copy)
{
  return Glib::RefPtr<Gst::TypeFindFactory>( dynamic_cast<Gst::TypeFindFactory*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& TypeFindFactory_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TypeFindFactory_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_type_find_factory_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void TypeFindFactory_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TypeFindFactory_Class::wrap_new(GObject* object)
{
  return new TypeFindFactory((GstTypeFindFactory*)object);
}


/* The implementation: */

GstTypeFindFactory* TypeFindFactory::gobj_copy()
{
  reference();
  return gobj();
}

TypeFindFactory::TypeFindFactory(const Glib::ConstructParams& construct_params)
:
  PluginFeature(construct_params)
{

}

TypeFindFactory::TypeFindFactory(GstTypeFindFactory* castitem)
:
  PluginFeature((GstPluginFeature*)(castitem))
{}


TypeFindFactory::TypeFindFactory(TypeFindFactory&& src) noexcept
: PluginFeature(std::move(src))
{}

TypeFindFactory& TypeFindFactory::operator=(TypeFindFactory&& src) noexcept
{
  PluginFeature::operator=(std::move(src));
  return *this;
}


TypeFindFactory::~TypeFindFactory() noexcept
{}


TypeFindFactory::CppClassType TypeFindFactory::typefindfactory_class_; // initialize static member

GType TypeFindFactory::get_type()
{
  return typefindfactory_class_.init().get_type();
}


GType TypeFindFactory::get_base_type()
{
  return gst_type_find_factory_get_type();
}


Glib::ListHandle< Glib::RefPtr<Gst::TypeFindFactory> > TypeFindFactory::get_list()
{
  return Glib::ListHandle< Glib::RefPtr<Gst::TypeFindFactory> >(gst_type_find_factory_get_list(), Glib::OWNERSHIP_DEEP);
}

std::vector<Glib::ustring> TypeFindFactory::get_extensions() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(gst_type_find_factory_get_extensions(const_cast<GstTypeFindFactory*>(gobj())), Glib::OWNERSHIP_NONE);
}

Glib::RefPtr<Gst::Caps> TypeFindFactory::get_caps()
{
  return Glib::wrap(gst_type_find_factory_get_caps(gobj()));
}

Glib::RefPtr<const Gst::Caps> TypeFindFactory::get_caps() const
{
  return const_cast<TypeFindFactory*>(this)->get_caps();
}

void TypeFindFactory::call_slot(Gst::TypeFind& find)
{
  gst_type_find_factory_call_function(gobj(), find.gobj());
}

bool TypeFindFactory::has_function() const
{
  return gst_type_find_factory_has_function(const_cast<GstTypeFindFactory*>(gobj()));
}


} // namespace Gst


