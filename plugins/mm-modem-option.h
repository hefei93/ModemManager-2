/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details:
 *
 * Copyright (C) 2008 - 2009 Novell, Inc.
 * Copyright (C) 2009 Red Hat, Inc.
 */

#ifndef MM_MODEM_OPTION_H
#define MM_MODEM_OPTION_H

#include "mm-generic-gsm.h"

#define MM_TYPE_MODEM_OPTION            (mm_modem_option_get_type ())
#define MM_MODEM_OPTION(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), MM_TYPE_MODEM_OPTION, MMModemOption))
#define MM_MODEM_OPTION_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  MM_TYPE_MODEM_OPTION, MMModemOptionClass))
#define MM_IS_MODEM_OPTION(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MM_TYPE_MODEM_OPTION))
#define MM_IS_MODEM_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  MM_TYPE_MODEM_OPTION))
#define MM_MODEM_OPTION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  MM_TYPE_MODEM_OPTION, MMModemOptionClass))

typedef struct {
    MMGenericGsm parent;
} MMModemOption;

typedef struct {
    MMGenericGsmClass parent;
} MMModemOptionClass;

GType mm_modem_option_get_type (void);

MMModem *mm_modem_option_new (const char *device,
                              const char *driver,
                              const char *plugin_name,
                              guint32 vendor,
                              guint32 product);

#endif /* MM_MODEM_OPTION_H */
