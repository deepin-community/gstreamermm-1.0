// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/iterator.h>
#include <gstreamermm/private/iterator_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008 The gstreamermm Development Team
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

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::IteratorItem>::value_type()
{
  return gst_iterator_item_get_type();
}

// static
GType Glib::Value<Gst::IteratorResult>::value_type()
{
  return gst_iterator_result_get_type();
}


