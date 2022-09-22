// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/memory.h>
#include <gstreamermm/private/memory_p.h>


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


#include <gstreamermm/allocator.h>

namespace Gst
{

Glib::RefPtr<Gst::Memory> Memory::create(Gst::MemoryFlags flags, gpointer data, gsize maxsize, gsize offset, gsize size)
{
    return Glib::RefPtr<Memory>(reinterpret_cast<Memory*>(gst_memory_new_wrapped(GstMemoryFlags(flags), data, maxsize, offset, size, 0, 0)));
}

Glib::RefPtr<Gst::Memory> Memory::make_mapped(Gst::MapInfo& info, Gst::MapFlags flags)
{
  reference();
  GstMemory* new_mem = gst_memory_make_mapped(gobj(), info.gobj(), static_cast<GstMapFlags>(flags));
  return Glib::wrap(new_mem, gobj() != new_mem);
}

}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::MemoryFlags>::value_type()
{
  return gst_memory_flags_get_type();
}


/* Why reinterpret_cast<Memory*>(gobject) is needed:
 *
 * A Memory instance is in fact always a GstMemory instance.
 * Unfortunately, GstMemory cannot be a member of Memory,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because Memory does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gst::Memory> wrap(GstMemory* object, bool take_copy)
{
  if(take_copy && object)
    gst_memory_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gst::Memory>(reinterpret_cast<Gst::Memory*>(object));
}

} // namespace Glib


namespace Gst
{


void Memory::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_memory_ref(reinterpret_cast<GstMemory*>(const_cast<Memory*>(this)));
}

void Memory::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_memory_unref(reinterpret_cast<GstMemory*>(const_cast<Memory*>(this)));
}

GstMemory* Memory::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GstMemory*>(this);
}

const GstMemory* Memory::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GstMemory*>(this);
}

GstMemory* Memory::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GstMemory*>(const_cast<Memory*>(this));
  gst_memory_ref(gobject);
  return gobject;
}


gsize Memory::get_maxsize() const
{
  return gobj()->maxsize;
}

gsize Memory::get_align() const
{
  return gobj()->align;
}

gsize Memory::get_offset() const
{
  return gobj()->offset;
}

gsize Memory::get_size() const
{
  return gobj()->size;
}

Glib::RefPtr<Gst::Memory> Memory::get_parent()
{
  Glib::RefPtr<Gst::Memory> ref_ptr(Glib::wrap(gobj()->parent));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

Glib::RefPtr<const Gst::Memory> Memory::get_parent() const
{
  Glib::RefPtr<const Gst::Memory> ref_ptr(Glib::wrap(gobj()->parent));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

Glib::RefPtr<Gst::Allocator> Memory::get_allocator()
{
  Glib::RefPtr<Gst::Allocator> ref_ptr(Glib::wrap(gobj()->allocator));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

Glib::RefPtr<const Gst::Allocator> Memory::get_allocator() const
{
  Glib::RefPtr<const Gst::Allocator> ref_ptr(Glib::wrap(gobj()->allocator));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

bool Memory::is_type(const Glib::ustring& mem_type) const
{
  return gst_memory_is_type(const_cast<GstMemory*>(gobj()), mem_type.c_str());
}

Glib::RefPtr<Gst::Memory> Memory::share(gssize offset, gssize size)
{
  return Glib::wrap(gst_memory_share(gobj(), offset, size));
}

void Memory::resize(gssize offset, gsize size)
{
  gst_memory_resize(gobj(), offset, size);
}

bool Memory::is_span(const Glib::RefPtr<Gst::Memory>& mem2, gsize& offset)
{
  return gst_memory_is_span(gobj(), Glib::unwrap(mem2), &(offset));
}

bool Memory::map(Gst::MapInfo& info, Gst::MapFlags flags)
{
  return gst_memory_map(gobj(), (info.gobj()), ((GstMapFlags)(flags)));
}

void Memory::unmap(Gst::MapInfo& info)
{
  gst_memory_unmap(gobj(), (info.gobj()));
}

Glib::RefPtr<Gst::Memory> Memory::copy(gssize offset, gssize size)
{
  return Glib::wrap(gst_memory_copy(gobj(), offset, size));
}

void Memory::init(Gst::MemoryFlags flags, const Glib::RefPtr<Gst::Allocator>& allocator, const Glib::RefPtr<Gst::Memory>& parent, gsize maxsize, gsize align, gsize offset, gsize size)
{
  gst_memory_init(gobj(), ((GstMemoryFlags)(flags)), const_cast<GstAllocator*>(Glib::unwrap(allocator)), Glib::unwrap(parent), maxsize, align, offset, size);
}

gsize Memory::get_sizes(gsize& offset, gsize& maxsize)
{
  return gst_memory_get_sizes(gobj(), &(offset), &(maxsize));
}


} // namespace Gst

