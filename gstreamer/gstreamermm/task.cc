// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/task.h>
#include <gstreamermm/private/task_p.h>


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
#include <gstreamermm/taskpool.h>


namespace
{

extern "C"
{

static void Task_Task_gstreamermm_callback(void* data)
{
  Gst::Task::SlotTask* the_slot = static_cast<Gst::Task::SlotTask*>(data);

  try
  {
    (*the_slot)();
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static void Task_Thread_gstreamermm_callback(GstTask* task, GThread* thread, gpointer user_data)
{
  Gst::Task::TaskThreadSlot* the_slot = static_cast<Gst::Task::TaskThreadSlot*>(user_data);

  try
  {
    (*the_slot)(Glib::wrap(task, true), Glib::Threads::wrap(thread));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static void Task_Callbacks_gstreamermm_callback_destroy(void* data)
{
  delete static_cast<Gst::Task::TaskThreadSlot*>(data);
}

} // extern "C"

} // anonymous namespace

namespace Gst
{

Task::Task(const SlotTask& task_slot)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Object(Glib::ConstructParams(task_class_.init()))
{
  // Create a copy of the slot.  A pointer to this copy will be passed through
  // the call back's data parameter.  It will be destroyed with the
  // std::unique_ptr<>.
  m_slot.reset(new SlotTask(task_slot));

  // These lines are taken verbatim from gst_task_create() after calling
  // g_object_new().
  gobj()->func = &Task_Task_gstreamermm_callback;
  gobj()->user_data = m_slot.get();
}

void Task::set_leave_slot(const SlotLeave& leave_slot)
{
  gst_task_set_leave_callback(gobj(), &Task_Thread_gstreamermm_callback, new SlotLeave(leave_slot), &Task_Callbacks_gstreamermm_callback_destroy);
}

void Task::set_enter_slot(const SlotEnter& enter_slot)
{
  gst_task_set_enter_callback(gobj(), &Task_Thread_gstreamermm_callback, new SlotEnter(enter_slot), &Task_Callbacks_gstreamermm_callback_destroy);
}

} //namespace Gst

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::TaskState>::value_type()
{
  return gst_task_state_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::Task> wrap(GstTask* object, bool take_copy)
{
  return Glib::RefPtr<Gst::Task>( dynamic_cast<Gst::Task*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& Task_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Task_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_task_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Task_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Task_Class::wrap_new(GObject* object)
{
  return new Task((GstTask*)object);
}


/* The implementation: */

GstTask* Task::gobj_copy()
{
  reference();
  return gobj();
}

Task::Task(const Glib::ConstructParams& construct_params)
:
  Object(construct_params)
{

}

Task::Task(GstTask* castitem)
:
  Object((GstObject*)(castitem))
{}


Task::Task(Task&& src) noexcept
: Object(std::move(src))
{}

Task& Task::operator=(Task&& src) noexcept
{
  Object::operator=(std::move(src));
  return *this;
}


Task::~Task() noexcept
{}


Task::CppClassType Task::task_class_; // initialize static member

GType Task::get_type()
{
  return task_class_.init().get_type();
}


GType Task::get_base_type()
{
  return gst_task_get_type();
}


Glib::RefPtr<Task> Task::create(const SlotTask& task_slot)
{
  return Glib::RefPtr<Task>( new Task(task_slot) );
}

void Task::set_lock(Glib::Threads::RecMutex& mutex)
{
  gst_task_set_lock(gobj(), mutex.gobj());
}

void Task::set_pool(const Glib::RefPtr<Gst::TaskPool>& pool)
{
  gst_task_set_pool(gobj(), Glib::unwrap(pool));
}

Glib::RefPtr<Gst::TaskPool> Task::get_pool()
{
  return Glib::wrap(gst_task_get_pool(gobj()));
}

Glib::RefPtr<const Gst::TaskPool> Task::get_pool() const
{
  return Glib::wrap(gst_task_get_pool(const_cast<GstTask*>(gobj())));
}

TaskState Task::get_state() const
{
  return ((TaskState)(gst_task_get_state(const_cast<GstTask*>(gobj()))));
}

void Task::set_state(Gst::TaskState state)
{
  gst_task_set_state(gobj(), ((GstTaskState)(state)));
}

bool Task::pause()
{
  return gst_task_pause(gobj());
}

bool Task::start()
{
  return gst_task_start(gobj());
}

bool Task::stop()
{
  return gst_task_stop(gobj());
}

bool Task::join()
{
  return gst_task_join(gobj());
}

void Task::cleanup_all()
{
  gst_task_cleanup_all();
}


} // namespace Gst

