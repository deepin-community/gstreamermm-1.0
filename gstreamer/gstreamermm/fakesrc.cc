// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/fakesrc.h>
#include <gstreamermm/private/fakesrc_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

static GType gst_fake_src_data_type_get_type()
{
  static GType const type = g_type_from_name("GstFakeSrcDataType");
  return type;
}

static GType gst_fake_src_size_type_get_type()
{
  static GType const type = g_type_from_name("GstFakeSrcSizeType");
  return type;
}

static GType gst_fake_src_fill_type_get_type()
{
  static GType const type = g_type_from_name("GstFakeSrcFillType");
  return type;
}

GType gst_fake_src_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("fakesrc");
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

FakeSrc::FakeSrc()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSrc(Glib::ConstructParams(fakesrc_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

FakeSrc::FakeSrc(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSrc(Glib::ConstructParams(fakesrc_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{


static void FakeSrc_signal_handoff_callback(GstFakeSrc* self, GstBuffer* p0,GstPad* p1,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gst::Buffer>&,const Glib::RefPtr<Gst::Pad>& >;

  auto obj = dynamic_cast<FakeSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, Glib::wrap(p1, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo FakeSrc_signal_handoff_info =
{
  "handoff",
  (GCallback) &FakeSrc_signal_handoff_callback,
  (GCallback) &FakeSrc_signal_handoff_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gst::FakeSrcDataType>::value_type()
{
  return gst_fake_src_data_type_get_type();
}

// static
GType Glib::Value<Gst::FakeSrcSizeType>::value_type()
{
  return gst_fake_src_size_type_get_type();
}

// static
GType Glib::Value<Gst::FakeSrcFillType>::value_type()
{
  return gst_fake_src_fill_type_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::FakeSrc> wrap(GstFakeSrc* object, bool take_copy)
{
  return Glib::RefPtr<Gst::FakeSrc>( dynamic_cast<Gst::FakeSrc*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& FakeSrc_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FakeSrc_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_fake_src_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void FakeSrc_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FakeSrc_Class::wrap_new(GObject* object)
{
  return new FakeSrc((GstFakeSrc*)object);
}


/* The implementation: */

GstFakeSrc* FakeSrc::gobj_copy()
{
  reference();
  return gobj();
}

FakeSrc::FakeSrc(const Glib::ConstructParams& construct_params)
:
  Gst::BaseSrc(construct_params)
{

}

FakeSrc::FakeSrc(GstFakeSrc* castitem)
:
  Gst::BaseSrc((GstBaseSrc*)(castitem))
{}


FakeSrc::FakeSrc(FakeSrc&& src) noexcept
: Gst::BaseSrc(std::move(src))
{}

FakeSrc& FakeSrc::operator=(FakeSrc&& src) noexcept
{
  Gst::BaseSrc::operator=(std::move(src));
  return *this;
}


FakeSrc::~FakeSrc() noexcept
{}


FakeSrc::CppClassType FakeSrc::fakesrc_class_; // initialize static member

GType FakeSrc::get_type()
{
  return fakesrc_class_.init().get_type();
}


GType FakeSrc::get_base_type()
{
  return gst_fake_src_gstreamermm_get_type();
}


Glib::RefPtr<FakeSrc> FakeSrc::create()
{
  return Glib::RefPtr<FakeSrc>( new FakeSrc() );
}

Glib::RefPtr<FakeSrc> FakeSrc::create(const Glib::ustring& name)
{
  return Glib::RefPtr<FakeSrc>( new FakeSrc(name) );
}


Glib::SignalProxy< void,const Glib::RefPtr<Gst::Buffer>&,const Glib::RefPtr<Gst::Pad>& > FakeSrc::signal_handoff()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gst::Buffer>&,const Glib::RefPtr<Gst::Pad>& >(this, &FakeSrc_signal_handoff_info);
}


Glib::PropertyProxy< Gst::FakeSrcDataType > FakeSrc::property_data() 
{
  return Glib::PropertyProxy< Gst::FakeSrcDataType >(this, "data");
}

Glib::PropertyProxy_ReadOnly< Gst::FakeSrcDataType > FakeSrc::property_data() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::FakeSrcDataType >(this, "data");
}

Glib::PropertyProxy< Gst::FakeSrcSizeType > FakeSrc::property_sizetype() 
{
  return Glib::PropertyProxy< Gst::FakeSrcSizeType >(this, "sizetype");
}

Glib::PropertyProxy_ReadOnly< Gst::FakeSrcSizeType > FakeSrc::property_sizetype() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::FakeSrcSizeType >(this, "sizetype");
}

Glib::PropertyProxy< int > FakeSrc::property_sizemin() 
{
  return Glib::PropertyProxy< int >(this, "sizemin");
}

Glib::PropertyProxy_ReadOnly< int > FakeSrc::property_sizemin() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "sizemin");
}

Glib::PropertyProxy< int > FakeSrc::property_sizemax() 
{
  return Glib::PropertyProxy< int >(this, "sizemax");
}

Glib::PropertyProxy_ReadOnly< int > FakeSrc::property_sizemax() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "sizemax");
}

Glib::PropertyProxy< Gst::FakeSrcFillType > FakeSrc::property_filltype() 
{
  return Glib::PropertyProxy< Gst::FakeSrcFillType >(this, "filltype");
}

Glib::PropertyProxy_ReadOnly< Gst::FakeSrcFillType > FakeSrc::property_filltype() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::FakeSrcFillType >(this, "filltype");
}

Glib::PropertyProxy< int > FakeSrc::property_datarate() 
{
  return Glib::PropertyProxy< int >(this, "datarate");
}

Glib::PropertyProxy_ReadOnly< int > FakeSrc::property_datarate() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "datarate");
}

Glib::PropertyProxy< bool > FakeSrc::property_sync() 
{
  return Glib::PropertyProxy< bool >(this, "sync");
}

Glib::PropertyProxy_ReadOnly< bool > FakeSrc::property_sync() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "sync");
}

Glib::PropertyProxy< Glib::ustring > FakeSrc::property_pattern() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "pattern");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > FakeSrc::property_pattern() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "pattern");
}

Glib::PropertyProxy< bool > FakeSrc::property_signal_handoffs() 
{
  return Glib::PropertyProxy< bool >(this, "signal-handoffs");
}

Glib::PropertyProxy_ReadOnly< bool > FakeSrc::property_signal_handoffs() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "signal-handoffs");
}

Glib::PropertyProxy< bool > FakeSrc::property_silent() 
{
  return Glib::PropertyProxy< bool >(this, "silent");
}

Glib::PropertyProxy_ReadOnly< bool > FakeSrc::property_silent() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "silent");
}

Glib::PropertyProxy< bool > FakeSrc::property_dump() 
{
  return Glib::PropertyProxy< bool >(this, "dump");
}

Glib::PropertyProxy_ReadOnly< bool > FakeSrc::property_dump() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "dump");
}

Glib::PropertyProxy< int > FakeSrc::property_parentsize() 
{
  return Glib::PropertyProxy< int >(this, "parentsize");
}

Glib::PropertyProxy_ReadOnly< int > FakeSrc::property_parentsize() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "parentsize");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > FakeSrc::property_last_message() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "last-message");
}

Glib::PropertyProxy< bool > FakeSrc::property_can_activate_pull() 
{
  return Glib::PropertyProxy< bool >(this, "can-activate-pull");
}

Glib::PropertyProxy_ReadOnly< bool > FakeSrc::property_can_activate_pull() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "can-activate-pull");
}

Glib::PropertyProxy< bool > FakeSrc::property_can_activate_push() 
{
  return Glib::PropertyProxy< bool >(this, "can-activate-push");
}

Glib::PropertyProxy_ReadOnly< bool > FakeSrc::property_can_activate_push() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "can-activate-push");
}

Glib::PropertyProxy< bool > FakeSrc::property_is_live() 
{
  return Glib::PropertyProxy< bool >(this, "is-live");
}

Glib::PropertyProxy_ReadOnly< bool > FakeSrc::property_is_live() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-live");
}

Glib::PropertyProxy< Gst::Format > FakeSrc::property_format() 
{
  return Glib::PropertyProxy< Gst::Format >(this, "format");
}

Glib::PropertyProxy_ReadOnly< Gst::Format > FakeSrc::property_format() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::Format >(this, "format");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED

