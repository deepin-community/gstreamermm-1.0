// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/giostreamsink.h>
#include <gstreamermm/private/giostreamsink_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_gio_stream_sink_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("giostreamsink");
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

GioStreamSink::GioStreamSink()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSink(Glib::ConstructParams(giostreamsink_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

GioStreamSink::GioStreamSink(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSink(Glib::ConstructParams(giostreamsink_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::GioStreamSink> wrap(GstGioStreamSink* object, bool take_copy)
{
  return Glib::RefPtr<Gst::GioStreamSink>( dynamic_cast<Gst::GioStreamSink*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& GioStreamSink_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GioStreamSink_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_gio_stream_sink_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GioStreamSink_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GioStreamSink_Class::wrap_new(GObject* object)
{
  return new GioStreamSink((GstGioStreamSink*)object);
}


/* The implementation: */

GstGioStreamSink* GioStreamSink::gobj_copy()
{
  reference();
  return gobj();
}

GioStreamSink::GioStreamSink(const Glib::ConstructParams& construct_params)
:
  Gst::BaseSink(construct_params)
{

}

GioStreamSink::GioStreamSink(GstGioStreamSink* castitem)
:
  Gst::BaseSink((GstBaseSink*)(castitem))
{}


GioStreamSink::GioStreamSink(GioStreamSink&& src) noexcept
: Gst::BaseSink(std::move(src))
{}

GioStreamSink& GioStreamSink::operator=(GioStreamSink&& src) noexcept
{
  Gst::BaseSink::operator=(std::move(src));
  return *this;
}


GioStreamSink::~GioStreamSink() noexcept
{}


GioStreamSink::CppClassType GioStreamSink::giostreamsink_class_; // initialize static member

GType GioStreamSink::get_type()
{
  return giostreamsink_class_.init().get_type();
}


GType GioStreamSink::get_base_type()
{
  return gst_gio_stream_sink_gstreamermm_get_type();
}


Glib::RefPtr<GioStreamSink> GioStreamSink::create()
{
  return Glib::RefPtr<GioStreamSink>( new GioStreamSink() );
}

Glib::RefPtr<GioStreamSink> GioStreamSink::create(const Glib::ustring& name)
{
  return Glib::RefPtr<GioStreamSink>( new GioStreamSink(name) );
}


Glib::PropertyProxy< Glib::RefPtr<Gio::OutputStream> > GioStreamSink::property_stream() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::OutputStream> >(this, "stream");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::OutputStream> > GioStreamSink::property_stream() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::OutputStream> >(this, "stream");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED

