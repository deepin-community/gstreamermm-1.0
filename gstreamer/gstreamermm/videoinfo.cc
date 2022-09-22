// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/videoinfo.h>
#include <gstreamermm/private/videoinfo_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008-2015 The gstreamermm Development Team
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

namespace Gst
{
VideoInfo::VideoInfo()
: take_ownership(true)
{
  gobject_ = gst_video_info_new();
}

VideoInfo::VideoInfo(const VideoInfo& other)
{
  gobject_ = gst_video_info_copy(other.gobject_);
  take_ownership = true;
}

VideoInfo& VideoInfo::operator=(const VideoInfo& other)
{
  if (take_ownership)
    gst_video_info_free(gobject_);

  take_ownership = true;
  gobject_ = gst_video_info_copy(other.gobject_);

  return *this;
}

VideoInfo::VideoInfo(GstVideoInfo* castitem, bool take_ownership)
: gobject_(castitem),
  take_ownership(take_ownership)
{
}

VideoInfo::~VideoInfo()
{
  if (take_ownership)
    gst_video_info_free(gobject_);
}
}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::VideoInterlaceMode>::value_type()
{
  return gst_video_interlace_mode_get_type();
}

// static
GType Glib::Value<Gst::VideoMultiviewMode>::value_type()
{
  return gst_video_multiview_mode_get_type();
}

// static
GType Glib::Value<Gst::VideoMultiviewFramePacking>::value_type()
{
  return gst_video_multiview_frame_packing_get_type();
}

// static
GType Glib::Value<Gst::VideoMultiviewFlags>::value_type()
{
  return gst_video_multiview_flags_get_type();
}

// static
GType Glib::Value<Gst::VideoFlags>::value_type()
{
  return gst_video_flags_get_type();
}


namespace Gst
{


void VideoInfo::init()
{
  gst_video_info_init(gobj());
}

void VideoInfo::set_format(Gst::VideoFormat format, guint width, guint height)
{
  gst_video_info_set_format(gobj(), ((GstVideoFormat)(format)), width, height);
}

bool VideoInfo::from_caps(const Glib::RefPtr<const Gst::Caps>& caps)
{
  return gst_video_info_from_caps(gobj(), Glib::unwrap(caps));
}

Glib::RefPtr<Gst::Caps> VideoInfo::to_caps() const
{
  return Glib::wrap(gst_video_info_to_caps(const_cast<GstVideoInfo*>(gobj())));
}

bool VideoInfo::convert(Gst::Format src_format, gint64 src_value, Gst::Format dest_format, gint64& dest_value)
{
  return gst_video_info_convert(gobj(), ((GstFormat)(src_format)), src_value, ((GstFormat)(dest_format)), &(dest_value));
}

bool VideoInfo::is_equal(const Gst::VideoInfo& other) const
{
  return gst_video_info_is_equal(const_cast<GstVideoInfo*>(gobj()), other.gobj());
}

const VideoFormatInfo VideoInfo::get_finfo() const
{
  return VideoFormatInfo(gobj()->finfo);
}

Gst::VideoInterlaceMode VideoInfo::get_interlace_mode() const
{
  return ((Gst::VideoInterlaceMode)(gobj()->interlace_mode));
}

void VideoInfo::set_interlace_mode(const Gst::VideoInterlaceMode& value)
{
  gobj()->interlace_mode = ((GstVideoInterlaceMode)(value));
}

Gst::VideoFlags VideoInfo::get_flags() const
{
  return ((Gst::VideoFlags)(gobj()->flags));
}

void VideoInfo::set_flags(const Gst::VideoFlags& value)
{
  gobj()->flags = ((GstVideoFlags)(value));
}

gint VideoInfo::get_width() const
{
  return gobj()->width;
}

void VideoInfo::set_width(const gint& value)
{
  gobj()->width = value;
}

gint VideoInfo::get_height() const
{
  return gobj()->height;
}

void VideoInfo::set_height(const gint& value)
{
  gobj()->height = value;
}

gsize VideoInfo::get_size() const
{
  return gobj()->size;
}

void VideoInfo::set_size(const gsize& value)
{
  gobj()->size = value;
}

gint VideoInfo::get_views() const
{
  return gobj()->views;
}

void VideoInfo::set_views(const gint& value)
{
  gobj()->views = value;
}

Gst::VideoChromaSite VideoInfo::get_chroma_site() const
{
  return ((Gst::VideoChromaSite)(gobj()->chroma_site));
}

void VideoInfo::set_chroma_site(const Gst::VideoChromaSite& value)
{
  gobj()->chroma_site = ((GstVideoChromaSite)(value));
}

gint VideoInfo::get_par_n() const
{
  return gobj()->par_n;
}

void VideoInfo::set_par_n(const gint& value)
{
  gobj()->par_n = value;
}

gint VideoInfo::get_par_d() const
{
  return gobj()->par_d;
}

void VideoInfo::set_par_d(const gint& value)
{
  gobj()->par_d = value;
}

gint VideoInfo::get_fps_n() const
{
  return gobj()->fps_n;
}

void VideoInfo::set_fps_n(const gint& value)
{
  gobj()->fps_n = value;
}

gint VideoInfo::get_fps_d() const
{
  return gobj()->fps_d;
}

void VideoInfo::set_fps_d(const gint& value)
{
  gobj()->fps_d = value;
}

Gst::VideoMultiviewMode VideoInfo::get_multiview_mode() const
{
  return ((Gst::VideoMultiviewMode)(gobj()->ABI.abi.multiview_mode));
}

void VideoInfo::set_multiview_mode(const Gst::VideoMultiviewMode& value)
{
  gobj()->ABI.abi.multiview_mode = ((GstVideoMultiviewMode)(value));
}

Gst::VideoMultiviewFlags VideoInfo::get_multiview_flags() const
{
  return ((Gst::VideoMultiviewFlags)(gobj()->ABI.abi.multiview_flags));
}

void VideoInfo::set_multiview_flags(const Gst::VideoMultiviewFlags& value)
{
  gobj()->ABI.abi.multiview_flags = ((GstVideoMultiviewFlags)(value));
}


} // namespace Gst


