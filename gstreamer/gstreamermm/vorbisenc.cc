// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/vorbisenc.h>
#include <gstreamermm/private/vorbisenc_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_vorbis_enc_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("vorbisenc");
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

VorbisEnc::VorbisEnc()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(vorbisenc_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

VorbisEnc::VorbisEnc(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(vorbisenc_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::VorbisEnc> wrap(GstVorbisEnc* object, bool take_copy)
{
  return Glib::RefPtr<Gst::VorbisEnc>( dynamic_cast<Gst::VorbisEnc*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& VorbisEnc_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &VorbisEnc_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_vorbis_enc_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Gst::TagSetter::add_interface(get_type());

  }

  return *this;
}


void VorbisEnc_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* VorbisEnc_Class::wrap_new(GObject* object)
{
  return new VorbisEnc((GstVorbisEnc*)object);
}


/* The implementation: */

GstVorbisEnc* VorbisEnc::gobj_copy()
{
  reference();
  return gobj();
}

VorbisEnc::VorbisEnc(const Glib::ConstructParams& construct_params)
:
  Gst::Element(construct_params)
{

}

VorbisEnc::VorbisEnc(GstVorbisEnc* castitem)
:
  Gst::Element((GstElement*)(castitem))
{}


VorbisEnc::VorbisEnc(VorbisEnc&& src) noexcept
: Gst::Element(std::move(src))
  , Gst::TagSetter(std::move(src))
{}

VorbisEnc& VorbisEnc::operator=(VorbisEnc&& src) noexcept
{
  Gst::Element::operator=(std::move(src));
  Gst::TagSetter::operator=(std::move(src));
  return *this;
}


VorbisEnc::~VorbisEnc() noexcept
{}


VorbisEnc::CppClassType VorbisEnc::vorbisenc_class_; // initialize static member

GType VorbisEnc::get_type()
{
  return vorbisenc_class_.init().get_type();
}


GType VorbisEnc::get_base_type()
{
  return gst_vorbis_enc_gstreamermm_get_type();
}


Glib::RefPtr<VorbisEnc> VorbisEnc::create()
{
  return Glib::RefPtr<VorbisEnc>( new VorbisEnc() );
}

Glib::RefPtr<VorbisEnc> VorbisEnc::create(const Glib::ustring& name)
{
  return Glib::RefPtr<VorbisEnc>( new VorbisEnc(name) );
}


Glib::PropertyProxy< int > VorbisEnc::property_max_bitrate() 
{
  return Glib::PropertyProxy< int >(this, "max-bitrate");
}

Glib::PropertyProxy_ReadOnly< int > VorbisEnc::property_max_bitrate() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "max-bitrate");
}

Glib::PropertyProxy< int > VorbisEnc::property_bitrate() 
{
  return Glib::PropertyProxy< int >(this, "bitrate");
}

Glib::PropertyProxy_ReadOnly< int > VorbisEnc::property_bitrate() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "bitrate");
}

Glib::PropertyProxy< int > VorbisEnc::property_min_bitrate() 
{
  return Glib::PropertyProxy< int >(this, "min-bitrate");
}

Glib::PropertyProxy_ReadOnly< int > VorbisEnc::property_min_bitrate() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "min-bitrate");
}

Glib::PropertyProxy< float > VorbisEnc::property_quality() 
{
  return Glib::PropertyProxy< float >(this, "quality");
}

Glib::PropertyProxy_ReadOnly< float > VorbisEnc::property_quality() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "quality");
}

Glib::PropertyProxy< bool > VorbisEnc::property_managed() 
{
  return Glib::PropertyProxy< bool >(this, "managed");
}

Glib::PropertyProxy_ReadOnly< bool > VorbisEnc::property_managed() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "managed");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > VorbisEnc::property_last_message() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "last-message");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED

