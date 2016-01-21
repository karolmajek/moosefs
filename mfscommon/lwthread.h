/*
 * Copyright (C) 2016 Jakub Kruszona-Zawadzki, Core Technology Sp. z o.o.
 * 
 * This file is part of MooseFS.
 * 
 * MooseFS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 (only).
 * 
 * MooseFS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with MooseFS; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * or visit http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef _LWTHREAD_H_
#define _LWTHREAD_H_

#include <pthread.h>
#include <inttypes.h>

#ifndef WIN32
int lwt_thread_create(pthread_t *th,const pthread_attr_t *attr,void *(*fn)(void *),void *arg);
#endif
int lwt_minthread_create(pthread_t *th,uint8_t detached,void *(*fn)(void *),void *arg);

#endif