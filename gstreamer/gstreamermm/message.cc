// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/message.h>
#include <gstreamermm/private/message_p.h>


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
#include <gstreamermm/element.h>
#include <gstreamermm/pad.h>
#include <gstreamermm/structure.h>
#include <gstreamermm/taglist.h>

#include <iostream>

namespace Gst
{

namespace Enums
{

Glib::ustring get_name(MessageType t)
{
  return gst_message_type_get_name(static_cast<GstMessageType>(t));
}

Glib::QueryQuark get_quark(MessageType t)
{
  return Glib::QueryQuark(gst_message_type_to_quark(static_cast<GstMessageType>(t)));
}

} //namespace Enums

Glib::RefPtr<Gst::Message> Message::create_writable()
{
  return Glib::RefPtr<Message>::cast_static(MiniObject::create_writable());
}

void MessageError::parse(Glib::Error& error, std::string& debug) const
{
  GError* c_error = nullptr;
  gchar* c_debug = nullptr;
  gst_message_parse_error(const_cast<GstMessage*>(gobj()), &c_error, &c_debug);

  debug = c_debug;
  if(c_debug)
    g_free(c_debug);

  error = Glib::Error(c_error);
}

Glib::Error MessageError::parse_error() const
{
  GError* c_error = nullptr;
  gst_message_parse_error(const_cast<GstMessage*>(gobj()), &c_error, nullptr);

  return Glib::Error(c_error);
}

std::string MessageError::parse_debug() const
{
  gchar* c_debug = nullptr;
  GError* c_error = nullptr;

  gst_message_parse_error(const_cast<GstMessage*>(gobj()), &c_error, &c_debug);

  std::string result = c_debug;

  if(c_debug)
    g_free(c_debug);

  if(c_error)
    g_error_free(c_error);

  return result;
}

void MessageWarning::parse(Glib::Error& error, std::string& debug) const
{
  GError* c_error = nullptr;
  gchar* c_debug = nullptr;
  gst_message_parse_warning(const_cast<GstMessage*>(gobj()), &c_error, &c_debug);

  debug = c_debug;
  if(c_debug)
    g_free(c_debug);

  error = Glib::Error(c_error);
}

Glib::Error MessageWarning::parse_error() const
{
  GError* c_error = nullptr;
  gst_message_parse_warning(const_cast<GstMessage*>(gobj()), &c_error, nullptr);

  return Glib::Error(c_error);
}

std::string MessageWarning::parse_debug() const
{
  gchar* c_debug = nullptr;
  GError* c_error = nullptr;

  gst_message_parse_warning(const_cast<GstMessage*>(gobj()), &c_error,
    &c_debug);

  std::string result = c_debug;

  if(c_debug)
    g_free(c_debug);

  if(c_error)
    g_error_free(c_error);

  return result;
}

void MessageInfo::parse(Glib::Error& error, std::string& debug) const
{
  GError* c_error = nullptr;
  gchar* c_debug = nullptr;
  gst_message_parse_info(const_cast<GstMessage*>(gobj()), &c_error, &c_debug);

  debug = c_debug;
  if(c_debug)
    g_free(c_debug);

  error = Glib::Error(c_error);
}

Glib::Error MessageInfo::parse_error() const
{
  GError* c_error = nullptr;
  gst_message_parse_info(const_cast<GstMessage*>(gobj()), &c_error, nullptr);

  return Glib::Error(c_error);
}

std::string MessageInfo::parse_debug() const
{
  gchar* c_debug = nullptr;
  GError* c_error = nullptr;

  gst_message_parse_info(const_cast<GstMessage*>(gobj()), &c_error, &c_debug);

  std::string result = c_debug;

  if(c_debug)
    g_free(c_debug);

  if(c_error)
    g_error_free(c_error);

  return result;
}

Gst::TagList MessageTag::parse_tag_list() const
{
  GstTagList* gst_tag_list = nullptr;
  gst_message_parse_tag(const_cast<GstMessage*>(gobj()), &gst_tag_list);
  return Gst::TagList(gst_tag_list);
}

int MessageBuffering::parse_buffering() const
{
  int percent = 0;
  gst_message_parse_buffering(const_cast<GstMessage*>(gobj()), &percent);
  return percent;
}

void MessageBuffering::set_stats(BufferingMode mode, int avg_in, int avg_out,
gint64 buffering_left)
{
  gst_message_set_buffering_stats(gobj(), static_cast<GstBufferingMode>(mode),
  avg_in, avg_out, buffering_left);
}

void MessageBuffering::parse_stats(BufferingMode& mode, int& avg_in,
int& avg_out, gint64& buffering_left) const
{
  gst_message_parse_buffering_stats(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstBufferingMode*>(&mode), &avg_in, &avg_out,
    &buffering_left);
}

BufferingMode MessageBuffering::parse_stats_buffering_mode() const
{
  GstBufferingMode mode = GST_BUFFERING_STREAM;

  gst_message_parse_buffering_stats(const_cast<GstMessage*>(gobj()), &mode,
    nullptr, nullptr, nullptr);
  return static_cast<BufferingMode>(mode);
}

int MessageBuffering::parse_stats_avg_in() const
{
  int avg_in = 0;

  gst_message_parse_buffering_stats(const_cast<GstMessage*>(gobj()), nullptr,
    &avg_in, nullptr, nullptr);
  return avg_in;
}

int MessageBuffering::parse_stats_avg_out() const
{
  int avg_out = 0;

  gst_message_parse_buffering_stats(const_cast<GstMessage*>(gobj()), nullptr,
    nullptr, &avg_out, nullptr);
  return avg_out;
}

gint64 MessageBuffering::parse_stats_buffering_left() const
{
  gint64 buffering_left = 0;

  gst_message_parse_buffering_stats(const_cast<GstMessage*>(gobj()), nullptr,
    nullptr, nullptr, &buffering_left);
  return buffering_left;
}

void MessageStateChanged::parse(State& oldstate, State& newstate,
State& pending) const
{
  gst_message_parse_state_changed(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstState*>(&oldstate),
    reinterpret_cast<GstState*>(&newstate),
    reinterpret_cast<GstState*>(&pending));
}

State MessageStateChanged::parse_new_state() const
{
  GstState new_state = GST_STATE_NULL;

  gst_message_parse_state_changed(const_cast<GstMessage*>(gobj()), nullptr,
    &new_state, nullptr);
  return State(new_state);
}

State MessageStateChanged::parse_old_state() const
{
  GstState old_state = GST_STATE_NULL;

  gst_message_parse_state_changed(const_cast<GstMessage*>(gobj()), &old_state,
    nullptr, nullptr);
  return State(old_state);
}

State MessageStateChanged::parse_pending_state() const
{
  GstState pending_state = GST_STATE_NULL;
  gst_message_parse_state_changed(const_cast<GstMessage*>(gobj()), nullptr,
    nullptr, &pending_state);
  return State(pending_state);
}

void MessageStepDone::parse(Gst::Format& format, guint64& amount, double& rate,
  bool& flush, bool& intermediate, guint64& duration, bool& eos) const
{
  gboolean gst_flush = FALSE;
  gboolean gst_intermediate = FALSE;
  gboolean gst_eos = FALSE;

  gst_message_parse_step_done(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstFormat*>(&format), &amount, &rate, &gst_flush,
    &gst_intermediate, &duration, &gst_eos);

  flush = gst_flush;
  intermediate = gst_intermediate;
  eos = gst_eos;
}

guint64 MessageStepDone::parse_duration() const
{
  guint64 duration = 0;
  gst_message_parse_step_done(const_cast<GstMessage*>(gobj()), nullptr, nullptr, nullptr, nullptr, nullptr,
    &duration, nullptr);
  return duration;
}

Gst::Format MessageStepDone::parse_format() const
{
  GstFormat format = GST_FORMAT_UNDEFINED;
  gst_message_parse_step_done(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstFormat*>(&format), nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
  return static_cast<Gst::Format>(format);
}

guint64 MessageStepDone::parse_amount() const
{
  guint64 amount = 0;
  gst_message_parse_step_done(const_cast<GstMessage*>(gobj()), nullptr, &amount, nullptr,
    nullptr, nullptr, nullptr, nullptr);
  return amount;
}

double MessageStepDone::parse_rate() const
{
  double rate = 0;
  gst_message_parse_step_done(const_cast<GstMessage*>(gobj()), nullptr, nullptr, &rate, nullptr,
    nullptr, nullptr, nullptr);
  return rate;
}

bool MessageStepDone::parse_flush() const
{
  gboolean gst_flush = FALSE;
  gst_message_parse_step_done(const_cast<GstMessage*>(gobj()), nullptr, nullptr, nullptr,
    &gst_flush, nullptr, nullptr, nullptr);
  return gst_flush;
}

bool MessageStepDone::parse_intermediate() const
{
  gboolean gst_intermediate = FALSE;
  gst_message_parse_step_done(const_cast<GstMessage*>(gobj()), nullptr, nullptr, nullptr, nullptr,
    &gst_intermediate, nullptr, nullptr);
  return gst_intermediate;
}

bool MessageStepDone::parse_eos() const
{
  gboolean gst_eos = FALSE;
  gst_message_parse_step_done(const_cast<GstMessage*>(gobj()), nullptr, nullptr, nullptr, nullptr, nullptr,
    nullptr, &gst_eos);
  return gst_eos;
}

void MessageClockProvide::parse(Glib::RefPtr<Gst::Clock>& clock, bool& ready) const
{
  GstClock* cclock = nullptr;
  gboolean ready_ = false;
  gst_message_parse_clock_provide(const_cast<GstMessage*>(gobj()), &cclock,
    &ready_);
  clock = Glib::wrap(cclock);
  ready = ready_;
}

Glib::RefPtr<Gst::Clock> MessageClockProvide::parse_clock_provide()
{
  GstClock* cclock = nullptr;
  gst_message_parse_clock_provide(gobj(), &cclock, nullptr);
  return Glib::wrap(cclock);
}

Glib::RefPtr<const Gst::Clock> MessageClockProvide::parse_clock_provide() const
{
  return parse_clock_provide();
}

bool MessageClockProvide::parse_ready() const
{
  gboolean ready = FALSE;
  gst_message_parse_clock_provide(const_cast<GstMessage*>(gobj()), nullptr,
    &ready);
  return ready;
}

Glib::RefPtr<Gst::Clock> MessageClockLost::parse_clock_lost()
{
  GstClock* cclock = nullptr;
  gst_message_parse_clock_lost(gobj(), &cclock);
  return Glib::wrap(cclock, false);
}

Glib::RefPtr<const Gst::Clock> MessageClockLost::parse_clock_lost() const
{
  return parse_clock_lost();
}

Glib::RefPtr<Gst::Clock> MessageNewClock::parse_new_clock()
{
  GstClock* cclock = nullptr;
  gst_message_parse_new_clock(gobj(), &cclock);
  return Glib::wrap(cclock, false);
}

Glib::RefPtr<const Gst::Clock> MessageNewClock::parse_new_clock() const
{
  return parse_new_clock();
}

Glib::RefPtr<Gst::MessageApplication> MessageApplication::create(const Glib::RefPtr<Gst::Object>& src, const Gst::Structure& structure)
{
  return Gst::wrap_msg_derived<MessageApplication>(gst_message_new_application(Glib::unwrap(src), structure.gobj_copy()), false);
}

Glib::RefPtr<Gst::MessageElement> MessageElement::create(const Glib::RefPtr<Gst::Object>& src, const Gst::Structure& structure)
{
  return Gst::wrap_msg_derived<MessageElement>(gst_message_new_element(Glib::unwrap(src), structure.gobj_copy()), false);
}

void MessageSegmentStart::parse(Format& format, gint64& position) const
{
  gst_message_parse_segment_start(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstFormat*>(&format), &position);
}

gint64 MessageSegmentStart::parse_position() const
{
  gint64 position = 0;
  gst_message_parse_segment_start(const_cast<GstMessage*>(gobj()), nullptr,
    &position);
  return position;
}

Format MessageSegmentStart::parse_format() const
{
  Format format = Gst::FORMAT_DEFAULT;
  gst_message_parse_segment_start(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstFormat*>(&format), nullptr);
  return format;
}

void MessageSegmentDone::parse(Format& format, gint64& position) const
{
  gst_message_parse_segment_done(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstFormat*>(&format), &position);
}

gint64 MessageSegmentDone::parse_position() const
{
  gint64 position = 0;
  gst_message_parse_segment_done(const_cast<GstMessage*>(gobj()), nullptr,
    &position);
  return position;
}

Format MessageSegmentDone::parse_format() const
{
  Format format = Gst::FORMAT_UNDEFINED;
  gst_message_parse_segment_done(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstFormat*>(&format), nullptr);
  return format;
}

Gst::ClockTime MessageAsyncDone::parse_running_time() const
{
  GstClockTime running_time;
  gst_message_parse_async_done(const_cast<GstMessage*>(gobj()), &running_time);
  return static_cast<Gst::ClockTime>(running_time);
}

void MessageStepStart::parse(bool& active, Gst::Format& format,
  guint64& amount, double& rate, bool& flush, bool& intermediate) const
{
  gboolean gst_active = FALSE;
  gboolean gst_flush = FALSE;
  gboolean gst_intermediate = FALSE;

  gst_message_parse_step_start(const_cast<GstMessage*>(gobj()), &gst_active,
    reinterpret_cast<GstFormat*>(&format), &amount, &rate, &gst_flush,
    &gst_intermediate);

  active = gst_active;
  flush = gst_flush;
  intermediate = gst_intermediate;
}

guint64 MessageStepStart::parse_amount() const
{
  guint64 amount = 0;
  gst_message_parse_step_start(const_cast<GstMessage*>(gobj()), nullptr, nullptr, &amount,
    nullptr, nullptr, nullptr);
  return amount;
}

bool MessageStepStart::parse_active() const
{
  gboolean gst_active = FALSE;
  gst_message_parse_step_start(const_cast<GstMessage*>(gobj()), &gst_active, nullptr,
    nullptr, nullptr, nullptr, nullptr);
  return gst_active;
}

Gst::Format MessageStepStart::parse_format() const
{
  GstFormat format = GST_FORMAT_UNDEFINED;
  gst_message_parse_step_start(const_cast<GstMessage*>(gobj()), nullptr,
    reinterpret_cast<GstFormat*>(&format), nullptr, nullptr, nullptr, nullptr);
  return static_cast<Gst::Format>(format);
}

double MessageStepStart::parse_rate() const
{
  double rate = 0;
  gst_message_parse_step_start(const_cast<GstMessage*>(gobj()), nullptr, nullptr, nullptr, &rate,
    nullptr, nullptr);
  return rate;
}

bool MessageStepStart::parse_flush() const
{
  gboolean gst_flush = FALSE;
  gst_message_parse_step_start(const_cast<GstMessage*>(gobj()), nullptr, nullptr, nullptr, nullptr,
    &gst_flush, nullptr);
  return gst_flush;
}

bool MessageStepStart::parse_intermediate() const
{
  gboolean gst_intermediate = FALSE;
  gst_message_parse_step_start(const_cast<GstMessage*>(gobj()), nullptr, nullptr, nullptr, nullptr, nullptr,
    &gst_intermediate);
  return gst_intermediate;
}

void MessageStructureChange::parse(Gst::StructureChangeType& type,
  Glib::RefPtr<Gst::Element>& owner, bool& busy) const
{
  GstElement* gst_element = nullptr;
  gboolean gst_busy = false;
  gst_message_parse_structure_change(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstStructureChangeType*>(&type), &gst_element, &gst_busy);
  owner = Glib::wrap(gst_element, true);
  busy = gst_busy;
}

Gst::StructureChangeType MessageStructureChange::parse_type() const
{
  GstStructureChangeType gst_type = GST_STRUCTURE_CHANGE_TYPE_PAD_LINK;
  gst_message_parse_structure_change(const_cast<GstMessage*>(gobj()),
    &gst_type, nullptr, nullptr);
  return static_cast<Gst::StructureChangeType>(gst_type);
}

Glib::RefPtr<Gst::Element> MessageStructureChange::parse_owner() const
{
  GstElement* gst_element = nullptr;
  gst_message_parse_structure_change(const_cast<GstMessage*>(gobj()), nullptr,
    &gst_element, nullptr);
  return Glib::wrap(gst_element, true);
}

bool MessageStructureChange::parse_busy() const
{
  gboolean gst_busy = false;
  gst_message_parse_structure_change(const_cast<GstMessage*>(gobj()), nullptr, nullptr,
    &gst_busy);
  return gst_busy;
}

Gst::State MessageRequestState::parse_state() const
{
  GstState gst_state = GST_STATE_VOID_PENDING;
  gst_message_parse_request_state(const_cast<GstMessage*>(gobj()),
    &gst_state);
  return static_cast<Gst::State>(gst_state);
}

void MessageStreamStatus::set_object(const Glib::RefPtr<Gst::Object>& object)
{
  Glib::Value< Glib::RefPtr<Gst::Object> > value;
  value.init(Glib::Value< Glib::RefPtr<Gst::Object> >::value_type());
  value.set(object);

  gst_message_set_stream_status_object(gobj(), value.gobj());
}

Glib::RefPtr<Gst::Object> MessageStreamStatus::get_object() const
{
  const GValue* g_val =
    gst_message_get_stream_status_object(const_cast<GstMessage*>(gobj()));
  GstObject* gst_object = static_cast<GstObject*>(g_value_get_object(g_val));
  return Glib::wrap(gst_object, true);
}

void MessageStreamStatus::parse(Gst::StreamStatusType& type,
  Glib::RefPtr<Gst::Element>& owner) const
{
  GstElement* gst_element;
  gst_message_parse_stream_status(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstStreamStatusType*>(&type), &gst_element);
  owner = Glib::wrap(gst_element, true);
}

Gst::StreamStatusType MessageStreamStatus::parse_type() const
{
  GstStreamStatusType type;
  gst_message_parse_stream_status(const_cast<GstMessage*>(gobj()),
    &type, nullptr);
  return static_cast<Gst::StreamStatusType>(type);
}

Glib::RefPtr<Gst::Element> MessageStreamStatus::parse_owner() const
{
  GstElement* gst_element;
  gst_message_parse_stream_status(const_cast<GstMessage*>(gobj()), nullptr,
    &gst_element);
  return Glib::wrap(gst_element, true);
}

void MessageQos::set_values(gint64 jitter, double proportion, gint quality)
{
  gst_message_set_qos_values(gobj(), jitter, proportion, quality);
}

void MessageQos::set_stats(Gst::Format format, guint64 processed, guint64 dropped)
{
  gst_message_set_qos_stats(gobj(), static_cast<GstFormat>(format),
    processed, dropped);
}

void MessageQos::parse(bool& live, guint64& running_time, guint64& stream_time,
  guint64& timestamp, guint64& duration) const
{
  gboolean tmp_live;
  gst_message_parse_qos(const_cast<GstMessage*>(gobj()), &tmp_live, &running_time,
    &stream_time, &timestamp, &duration);
  live = tmp_live;
}

void MessageQos::parse_values(gint64& jitter, double& proportion, gint& quality) const
{
  gst_message_parse_qos_values(const_cast<GstMessage*>(gobj()), &jitter, &proportion, &quality);
}

void MessageQos::parse_stats(Gst::Format& format, guint64& processed, guint64& dropped) const
{
  gst_message_parse_qos_stats(const_cast<GstMessage*>(gobj()),
    reinterpret_cast<GstFormat*>(&format), &processed, &dropped);
}

void MessageStreamStart::set_group_id(guint group_id)
{
  gst_message_set_group_id(gobj(), group_id);
}

bool MessageStreamStart::parse_group_id(guint& group_id) const
{
  return gst_message_parse_group_id(const_cast<GstMessage*>(gobj()), &group_id);
}

Glib::RefPtr<Gst::Context> MessageHaveContext::parse_have_context()
{
  GstContext* context;
  gst_message_parse_have_context(const_cast<GstMessage*>(gobj()), &context);
  return Glib::wrap(context, true);
}

Glib::RefPtr<const Gst::Context> MessageHaveContext::parse_have_context() const
{
  return parse_have_context();
}

bool MessageNeedContext::parse(Glib::ustring& context_type) const
{
  gchar* c_context_type = nullptr;
  bool ret = gst_message_parse_context_type(const_cast<GstMessage*>(gobj()),
    const_cast<const gchar**>(&c_context_type));
  context_type = c_context_type;
  if(c_context_type)
    g_free(c_context_type);
  return ret;
}

Gst::ClockTime MessageResetTime::parse_running_time() const
{
  GstClockTime running_time;
  gst_message_parse_reset_time(const_cast<GstMessage*>(gobj()),
    &running_time);
  return static_cast<GstClockTime>(running_time);
}

void MessageToc::parse(Glib::RefPtr<Gst::Toc>& toc, bool& updated) const
{
  GstToc* c_toc;
  gboolean c_updated;
  gst_message_parse_toc(const_cast<GstMessage*>(gobj()), &c_toc, &c_updated);
  toc = Glib::wrap(c_toc, true);
  updated = updated;
}

void MessageProgress::parse(Gst::ProgressType& type, Glib::ustring& code, Glib::ustring& text) const
{
  GstProgressType c_type;
  gchar* c_code, * c_text;
  gst_message_parse_progress(const_cast<GstMessage*>(gobj()), &c_type, &c_code, &c_text);
  code = c_code;
  text = c_text;
  if(c_code)
    g_free(c_code);
  if(c_text)
    g_free(c_text);
  type = static_cast<Gst::ProgressType>(c_type);
}

Gst::ProgressType MessageProgress::parse_type() const
{
  GstProgressType c_type;

  gst_message_parse_progress(const_cast<GstMessage*>(gobj()),
    &c_type, nullptr, nullptr);

  return static_cast<Gst::ProgressType>(c_type);
}

Glib::ustring MessageProgress::parse_code() const
{
  gchar* c_code;
  Glib::ustring code;
  
  gst_message_parse_progress(const_cast<GstMessage*>(gobj()),
    nullptr, &c_code, nullptr);

  code = c_code;

  if(c_code)
    g_free(c_code);

  return code;
}

Glib::ustring MessageProgress::parse_text() const
{
  gchar* c_text;
  Glib::ustring text;
  
  gst_message_parse_progress(const_cast<GstMessage*>(gobj()),
    nullptr, nullptr, &c_text);

  text = c_text;

  if(c_text)
    g_free(c_text);

  return text;
}

} //namespace Gst

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::MessageType>::value_type()
{
  return gst_message_type_get_type();
}

// static
GType Glib::Value<Gst::ProgressType>::value_type()
{
  return gst_progress_type_get_type();
}

// static
GType Glib::Value<Gst::StructureChangeType>::value_type()
{
  return gst_structure_change_type_get_type();
}

// static
GType Glib::Value<Gst::StreamStatusType>::value_type()
{
  return gst_stream_status_type_get_type();
}


/* Why reinterpret_cast<Message*>(gobject) is needed:
 *
 * A Message instance is in fact always a GstMessage instance.
 * Unfortunately, GstMessage cannot be a member of Message,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because Message does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gst::Message> wrap(GstMessage* object, bool take_copy)
{
  if(take_copy && object)
    gst_message_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gst::Message>(reinterpret_cast<Gst::Message*>(object));
}

} // namespace Glib


namespace Gst
{


void Message::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_message_ref(reinterpret_cast<GstMessage*>(const_cast<Message*>(this)));
}

void Message::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_message_unref(reinterpret_cast<GstMessage*>(const_cast<Message*>(this)));
}

GstMessage* Message::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GstMessage*>(this);
}

const GstMessage* Message::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GstMessage*>(this);
}

GstMessage* Message::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GstMessage*>(const_cast<Message*>(this));
  gst_message_ref(gobject);
  return gobject;
}


Gst::Structure Message::get_structure() const
{
  return Glib::wrap(const_cast<GstStructure*>(gst_message_get_structure(const_cast<GstMessage*>(gobj()))), true);
}

guint32 Message::get_seqnum() const
{
  return gst_message_get_seqnum(const_cast<GstMessage*>(gobj()));
}

void Message::set_seqnum(guint32 seqnum)
{
  gst_message_set_seqnum(gobj(), seqnum);
}

Glib::RefPtr<Gst::Message> Message::copy() const
{
  return Glib::wrap(gst_message_copy(const_cast<GstMessage*>(gobj())));
}

MessageType Message::get_message_type() const
{
  return ((MessageType)(gobj()->type));
}

Gst::ClockTime Message::get_timestamp() const
{
  return (Gst::ClockTime)(gobj()->timestamp);
}

Glib::RefPtr<Gst::Object> Message::get_source()
{
  Glib::RefPtr<Gst::Object> ref_ptr(Glib::wrap(gobj()->src));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

Glib::RefPtr<const Gst::Object> Message::get_source() const
{
  Glib::RefPtr<const Gst::Object> ref_ptr(Glib::wrap(gobj()->src));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

bool Message::has_name(const Glib::ustring& name) const
{
  return gst_message_has_name(const_cast<GstMessage*>(gobj()), name.c_str());
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageEos> MessageEos::create(const Glib::RefPtr<Gst::Object>& src)
{
  return Gst::wrap_msg_derived<MessageEos>(gst_message_new_eos(Glib::unwrap(src)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageError> MessageError::create(const Glib::RefPtr<Gst::Object>& src, const Glib::Error& error, const std::string& debug)
{
  return Gst::wrap_msg_derived<MessageError>(gst_message_new_error(Glib::unwrap(src), const_cast<GError*>(error.gobj()), debug.c_str()), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageWarning> MessageWarning::create(const Glib::RefPtr<Gst::Object>& src, const Glib::Error& error, const std::string& debug)
{
  return Gst::wrap_msg_derived<MessageWarning>(gst_message_new_warning(Glib::unwrap(src), const_cast<GError*>(error.gobj()), debug.c_str()), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageInfo> MessageInfo::create(const Glib::RefPtr<Gst::Object>& src, const Glib::Error& error, const std::string& debug)
{
  return Gst::wrap_msg_derived<MessageInfo>(gst_message_new_info(Glib::unwrap(src), const_cast<GError*>(error.gobj()), debug.c_str()), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageTag> MessageTag::create(const Glib::RefPtr<Gst::Object>& src, const Gst::TagList& taglist)
{
  return Gst::wrap_msg_derived<MessageTag>(gst_message_new_tag(Glib::unwrap(src), const_cast<GstTagList*>(taglist.gobj())), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageBuffering> MessageBuffering::create(const Glib::RefPtr<Gst::Object>& src, int percent)
{
  return Gst::wrap_msg_derived<MessageBuffering>(gst_message_new_buffering(Glib::unwrap(src), percent), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageStateChanged> MessageStateChanged::create(const Glib::RefPtr<Gst::Object>& src, State oldstate, State newstate, State pending)
{
  return Gst::wrap_msg_derived<MessageStateChanged>(gst_message_new_state_changed(Glib::unwrap(src), ((GstState)(oldstate)), ((GstState)(newstate)), ((GstState)(pending))), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageStateDirty> MessageStateDirty::create(const Glib::RefPtr<Gst::Object>& src)
{
  return Gst::wrap_msg_derived<MessageStateDirty>(gst_message_new_state_dirty(Glib::unwrap(src)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageStepDone> MessageStepDone::create(const Glib::RefPtr<Gst::Object>& src, Gst::Format format, guint64 amount, double rate, bool flush, bool intermediate, guint64 duration, bool eos)
{
  return Gst::wrap_msg_derived<MessageStepDone>(gst_message_new_step_done(Glib::unwrap(src), ((GstFormat)(format)), amount, rate, static_cast<int>(flush), static_cast<int>(intermediate), duration, static_cast<int>(eos)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageClockProvide> MessageClockProvide::create(const Glib::RefPtr<Gst::Object>& src, const Glib::RefPtr<Gst::Clock>& clock, bool ready)
{
  return Gst::wrap_msg_derived<MessageClockProvide>(gst_message_new_clock_provide(Glib::unwrap(src), Glib::unwrap(clock), static_cast<int>(ready)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageClockLost> MessageClockLost::create(const Glib::RefPtr<Gst::Object>& src, const Glib::RefPtr<Gst::Clock>& clock)
{
  return Gst::wrap_msg_derived<MessageClockLost>(gst_message_new_clock_lost(Glib::unwrap(src), Glib::unwrap(clock)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageNewClock> MessageNewClock::create(const Glib::RefPtr<Gst::Object>& src, const Glib::RefPtr<Gst::Clock>& clock)
{
  return Gst::wrap_msg_derived<MessageNewClock>(gst_message_new_new_clock(Glib::unwrap(src), Glib::unwrap(clock)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageApplication> MessageApplication::create(const Glib::RefPtr<Gst::Object>& src, Gst::Structure&& structure)
{
  return Gst::wrap_msg_derived<MessageApplication>(gst_message_new_application(Glib::unwrap(src), (structure) ? structure.release() : nullptr), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageElement> MessageElement::create(const Glib::RefPtr<Gst::Object>& src, Gst::Structure&& structure)
{
  return Gst::wrap_msg_derived<MessageElement>(gst_message_new_element(Glib::unwrap(src), (structure) ? structure.release() : nullptr), false);
}

Glib::RefPtr<Gst::MessageElement> MessageElement::create(const Glib::RefPtr<Gst::Object>& src)
{
  return Gst::wrap_msg_derived<MessageElement>(gst_message_new_element(Glib::unwrap(src), nullptr), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageCustom> MessageCustom::create(MessageType type, const Glib::RefPtr<Gst::Object>& src, Gst::Structure& structure)
{
  return Gst::wrap_msg_derived<MessageCustom>(gst_message_new_custom(((GstMessageType)(type)), Glib::unwrap(src), structure.gobj()), false);
}

Glib::RefPtr<Gst::MessageCustom> MessageCustom::create(MessageType type, const Glib::RefPtr<Gst::Object>& src)
{
  return Gst::wrap_msg_derived<MessageCustom>(gst_message_new_custom(((GstMessageType)(type)), Glib::unwrap(src), nullptr), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageSegmentStart> MessageSegmentStart::create(const Glib::RefPtr<Gst::Object>& src, Format format, gint64 position)
{
  return Gst::wrap_msg_derived<MessageSegmentStart>(gst_message_new_segment_start(Glib::unwrap(src), ((GstFormat)(format)), position), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageSegmentDone> MessageSegmentDone::create(const Glib::RefPtr<Gst::Object>& src, Format format, gint64 position)
{
  return Gst::wrap_msg_derived<MessageSegmentDone>(gst_message_new_segment_done(Glib::unwrap(src), ((GstFormat)(format)), position), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageDurationChanged> MessageDurationChanged::create(const Glib::RefPtr<Gst::Object>& src)
{
  return Gst::wrap_msg_derived<MessageDurationChanged>(gst_message_new_duration_changed(Glib::unwrap(src)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageLatency> MessageLatency::create(const Glib::RefPtr<Gst::Object>& src)
{
  return Gst::wrap_msg_derived<MessageLatency>(gst_message_new_latency(Glib::unwrap(src)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageAsyncStart> MessageAsyncStart::create(const Glib::RefPtr<Gst::Object>& src)
{
  return Gst::wrap_msg_derived<MessageAsyncStart>(gst_message_new_async_start(Glib::unwrap(src)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageAsyncDone> MessageAsyncDone::create(const Glib::RefPtr<Gst::Object>& src, Gst::ClockTime running_time)
{
  return Gst::wrap_msg_derived<MessageAsyncDone>(gst_message_new_async_done(Glib::unwrap(src), ((GstClockTime)(running_time))), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageStepStart> MessageStepStart::create(const Glib::RefPtr<Gst::Object>& src, bool active, Gst::Format format, guint64 amount, double rate, bool flush, bool intermediate)
{
  return Gst::wrap_msg_derived<MessageStepStart>(gst_message_new_step_start(Glib::unwrap(src), static_cast<int>(active), ((GstFormat)(format)), amount, rate, static_cast<int>(flush), static_cast<int>(intermediate)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageStructureChange> MessageStructureChange::create(const Glib::RefPtr<Gst::Object>& src, Gst::StructureChangeType type, const Glib::RefPtr<Gst::Element>& owner, bool busy)
{
  return Gst::wrap_msg_derived<MessageStructureChange>(gst_message_new_structure_change(Glib::unwrap(src), ((GstStructureChangeType)(type)), Glib::unwrap(owner), static_cast<int>(busy)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageRequestState> MessageRequestState::create(const Glib::RefPtr<Gst::Object>& src, Gst::State state)
{
  return Gst::wrap_msg_derived<MessageRequestState>(gst_message_new_request_state(Glib::unwrap(src), ((GstState)(state))), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageStreamStatus> MessageStreamStatus::create(const Glib::RefPtr<Gst::Object>& src, Gst::StreamStatusType type, const Glib::RefPtr<Gst::Element>& owner)
{
  return Gst::wrap_msg_derived<MessageStreamStatus>(gst_message_new_stream_status(Glib::unwrap(src), ((GstStreamStatusType)(type)), Glib::unwrap(owner)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageQos> MessageQos::create(const Glib::RefPtr<Gst::Object>& src, bool live, guint64 running_time, guint64 stream_time, guint64 timestamp, guint64 duration)
{
  return Gst::wrap_msg_derived<MessageQos>(gst_message_new_qos(Glib::unwrap(src), static_cast<int>(live), running_time, stream_time, timestamp, duration), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageStreamStart> MessageStreamStart::create(const Glib::RefPtr<Gst::Object>& src)
{
  return Gst::wrap_msg_derived<MessageStreamStart>(gst_message_new_stream_start(Glib::unwrap(src)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageHaveContext> MessageHaveContext::create(const Glib::RefPtr<Gst::Object>& src, const Glib::RefPtr<Gst::Context>& context)
{
  return Gst::wrap_msg_derived<MessageHaveContext>(gst_message_new_have_context(Glib::unwrap(src), context->gobj()), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageNeedContext> MessageNeedContext::create(const Glib::RefPtr<Gst::Object>& src, const Glib::ustring& context_type)
{
  return Gst::wrap_msg_derived<MessageNeedContext>(gst_message_new_need_context(Glib::unwrap(src), context_type.c_str()), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageResetTime> MessageResetTime::create(const Glib::RefPtr<Gst::Object>& src, Gst::ClockTime running_time)
{
  return Gst::wrap_msg_derived<MessageResetTime>(gst_message_new_reset_time(Glib::unwrap(src), ((GstClockTime)(running_time))), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageToc> MessageToc::create(const Glib::RefPtr<Gst::Object>& src, const Glib::RefPtr<Gst::Toc>& toc, bool updated)
{
  return Gst::wrap_msg_derived<MessageToc>(gst_message_new_toc(Glib::unwrap(src), Glib::unwrap(toc), static_cast<int>(updated)), false);
}


} // namespace Gst


namespace Gst
{


Glib::RefPtr<Gst::MessageProgress> MessageProgress::create(const Glib::RefPtr<Gst::Object>& src, Gst::ProgressType type, const Glib::ustring& code, const Glib::ustring& text)
{
  return Gst::wrap_msg_derived<MessageProgress>(gst_message_new_progress(Glib::unwrap(src), ((GstProgressType)(type)), code.c_str(), text.c_str()), false);
}


} // namespace Gst


