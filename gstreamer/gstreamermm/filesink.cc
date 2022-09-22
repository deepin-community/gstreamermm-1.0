// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/filesink.h>
#include <gstreamermm/private/filesink_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

static GType gst_file_sink_buffer_mode_get_type()
{
  static GType const type = g_type_from_name("GstFileSinkBufferMode");
  return type;
}

GType gst_file_sink_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("filesink");
    // Make sure that the feature is actually loaded:
    if(factory)
    {
      feature =
        gst_plugin_feature_load(GST_PLUGIN_FEATURE(factory));

      g_object_unref(factory);
      factory = GST_ELEMENT_FACTORY(feature);
      type = gst_element_factory_get_element_type(factory);
      g_object_unref(factory);
    }
  }

  return type;
}

} // extern "C"

namespace Gst
{

FileSink::FileSink()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSink(Glib::ConstructParams(filesink_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

FileSink::FileSink(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSink(Glib::ConstructParams(filesink_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::FileSinkBufferMode>::value_type()
{
  return gst_file_sink_buffer_mode_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::FileSink> wrap(GstFileSink* object, bool take_copy)
{
  return Glib::RefPtr<Gst::FileSink>( dynamic_cast<Gst::FileSink*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& FileSink_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FileSink_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_file_sink_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Gst::URIHandler::add_interface(get_type());

  }

  return *this;
}


void FileSink_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FileSink_Class::wrap_new(GObject* object)
{
  return new FileSink((GstFileSink*)object);
}


/* The implementation: */

GstFileSink* FileSink::gobj_copy()
{
  reference();
  return gobj();
}

FileSink::FileSink(const Glib::ConstructParams& construct_params)
:
  Gst::BaseSink(construct_params)
{

}

FileSink::FileSink(GstFileSink* castitem)
:
  Gst::BaseSink((GstBaseSink*)(castitem))
{}


FileSink::FileSink(FileSink&& src) noexcept
: Gst::BaseSink(std::move(src))
  , Gst::URIHandler(std::move(src))
{}

FileSink& FileSink::operator=(FileSink&& src) noexcept
{
  Gst::BaseSink::operator=(std::move(src));
  Gst::URIHandler::operator=(std::move(src));
  return *this;
}


FileSink::~FileSink() noexcept
{}


FileSink::CppClassType FileSink::filesink_class_; // initialize static member

GType FileSink::get_type()
{
  return filesink_class_.init().get_type();
}


GType FileSink::get_base_type()
{
  return gst_file_sink_gstreamermm_get_type();
}


Glib::RefPtr<FileSink> FileSink::create()
{
  return Glib::RefPtr<FileSink>( new FileSink() );
}

Glib::RefPtr<FileSink> FileSink::create(const Glib::ustring& name)
{
  return Glib::RefPtr<FileSink>( new FileSink(name) );
}


Glib::PropertyProxy< Glib::ustring > FileSink::property_location() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "location");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > FileSink::property_location() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "location");
}

Glib::PropertyProxy< Gst::FileSinkBufferMode > FileSink::property_buffer_mode() 
{
  return Glib::PropertyProxy< Gst::FileSinkBufferMode >(this, "buffer-mode");
}

Glib::PropertyProxy_ReadOnly< Gst::FileSinkBufferMode > FileSink::property_buffer_mode() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::FileSinkBufferMode >(this, "buffer-mode");
}

Glib::PropertyProxy< guint > FileSink::property_buffer_size() 
{
  return Glib::PropertyProxy< guint >(this, "buffer-size");
}

Glib::PropertyProxy_ReadOnly< guint > FileSink::property_buffer_size() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "buffer-size");
}

Glib::PropertyProxy< bool > FileSink::property_append() 
{
  return Glib::PropertyProxy< bool >(this, "append");
}

Glib::PropertyProxy_ReadOnly< bool > FileSink::property_append() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "append");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED

