#ifndef TASKTRACE_H_
#define TASKTRACE_H_

void tasktrace_note_start(const osThreadAttr_t *attr, osThread_t thread_id);

void tasktrace_note_resume(osThread_t thread_id);

#endif