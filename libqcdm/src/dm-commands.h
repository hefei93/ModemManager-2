/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * Copyright (C) 2010 Red Hat, Inc.
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBQCDM_DM_COMMANDS_H
#define LIBQCDM_DM_COMMANDS_H

enum {
    DIAG_CMD_VERSION_INFO = 0,  /* Version info */
    DIAG_CMD_ESN          = 1,  /* ESN */
    DIAG_CMD_PEEKB        = 2,  /* Peek byte */
    DIAG_CMD_PEEKW        = 3,  /* Peek word */
    DIAG_CMD_PEEKD        = 4,  /* Peek dword */
    DIAG_CMD_POKEB        = 5,  /* Poke byte */
    DIAG_CMD_POKEW        = 6,  /* Poke word */
    DIAG_CMD_POKED        = 7,  /* Poke dword */
    DIAG_CMD_OUTP         = 8,  /* Byte output */
    DIAG_CMD_OUTPW        = 9,  /* Word output */
    DIAG_CMD_INP          = 10, /* Byte input */
    DIAG_CMD_INPW         = 11, /* Word input */
    DIAG_CMD_STATUS       = 12, /* Station status */
    DIAG_CMD_LOGMASK      = 15, /* Set logging mask */
    DIAG_CMD_LOG          = 16, /* Log packet */
    DIAG_CMD_NV_PEEK      = 17, /* Peek NV memory */
    DIAG_CMD_NV_POKE      = 18, /* Poke NV memory */
    DIAG_CMD_BAD_CMD      = 19, /* Invalid command (response) */
    DIAG_CMD_BAD_PARM     = 20, /* Invalid parameter (response) */
    DIAG_CMD_BAD_LEN      = 21, /* Invalid packet length (response) */
    DIAG_CMD_BAD_DEV      = 22, /* Not accepted by the device (response) */
    DIAG_CMD_BAD_MODE     = 24, /* Not allowed in this mode (response) */
    DIAG_CMD_TAGRAPH      = 25, /* Info for TA power and voice graphs */
    DIAG_CMD_MARKOV       = 26, /* Markov stats */
    DIAG_CMD_MARKOV_RESET = 27, /* Reset Markov stats */
    DIAG_CMD_DIAG_VER     = 28, /* Diagnostic Monitor version */
    DIAG_CMD_TIMESTAMP    = 29, /* Return a timestamp */
    DIAG_CMD_TA_PARM      = 30, /* Set TA parameters */
    DIAG_CMD_MESSAGE      = 31, /* Request for msg report */
    DIAG_CMD_HS_KEY       = 32, /* Handset emulation -- keypress */
    DIAG_CMD_HS_LOCK      = 33, /* Handset emulation -- lock or unlock */
    DIAG_CMD_HS_SCREEN    = 34, /* Handset emulation -- display request */
    DIAG_CMD_PARM_SET     = 36, /* Parameter download */
    DIAG_CMD_NV_READ      = 38, /* Read NV item */
    DIAG_CMD_NV_WRITE     = 39, /* Write NV item */
    DIAG_CMD_CONTROL      = 41, /* Mode change request */
    DIAG_CMD_ERR_READ     = 42, /* Error record retreival */
    DIAG_CMD_ERR_CLEAR    = 43, /* Error record clear */
    DIAG_CMD_SER_RESET    = 44, /* Symbol error rate counter reset */
    DIAG_CMD_SER_REPORT   = 45, /* Symbol error rate counter report */
    DIAG_CMD_TEST         = 46, /* Run a specified test */
    DIAG_CMD_GET_DIPSW    = 47, /* Retreive the current DIP switch setting */
    DIAG_CMD_SET_DIPSW    = 48, /* Write new DIP switch setting */
    DIAG_CMD_VOC_PCM_LB   = 49, /* Start/Stop Vocoder PCM loopback */
    DIAG_CMD_VOC_PKT_LB   = 50, /* Start/Stop Vocoder PKT loopback */
    DIAG_CMD_ORIG         = 53, /* Originate a call */
    DIAG_CMD_END          = 54, /* End a call */
    DIAG_CMD_SW_VERSION   = 56, /* Get software version */
    DIAG_CMD_DLOAD        = 58, /* Switch to downloader */
    DIAG_CMD_TMOB         = 59, /* Test Mode Commands and FTM commands*/
    DIAG_CMD_STATE        = 63, /* Current state of the phone */
    DIAG_CMD_PILOT_SETS   = 64, /* Return all current sets of pilots */
    DIAG_CMD_SPC          = 65, /* Send the Service Programming Code to unlock */
    DIAG_CMD_BAD_SPC_MODE = 66, /* Invalid NV read/write because SP is locked */
    DIAG_CMD_PARM_GET2    = 67, /* (obsolete) */
    DIAG_CMD_SERIAL_CHG   = 68, /* Serial mode change */
    DIAG_CMD_PASSWORD     = 70, /* Send password to unlock secure operations */
    DIAG_CMD_BAD_SEC_MODE = 71, /* Operation not allowed in this security state */
    DIAG_CMD_PRL_WRITE         = 72,  /* Write PRL */
    DIAG_CMD_PRL_READ          = 73,  /* Read PRL */
    DIAG_CMD_SUBSYS            = 75,  /* Subsystem commands */
    DIAG_CMD_FEATURE_QUERY     = 81,
    DIAG_CMD_SMS_READ          = 83,  /* Read SMS message out of NV memory */
    DIAG_CMD_SMS_WRITE         = 84,  /* Write SMS message into NV memory */
    DIAG_CMD_SUP_FER           = 85,  /* Frame Error Rate info on multiple channels */
    DIAG_CMD_SUP_WALSH_CODES   = 86,  /* Supplemental channel walsh codes */
    DIAG_CMD_SET_MAX_SUP_CH    = 87,  /* Sets the maximum # supplemental channels */
    DIAG_CMD_PARM_GET_IS95B    = 88,  /* Get parameters including SUPP and MUX2 */
    DIAG_CMD_FS_OP             = 89,  /* Embedded File System (EFS) operations */
    DIAG_CMD_AKEY_VERIFY       = 90,  /* AKEY Verification */
    DIAG_CMD_HS_BMP_SCREEN     = 91,  /* Handset Emulation -- Bitmap screen */
    DIAG_CMD_CONFIG_COMM       = 92,  /* Configure communications */
    DIAG_CMD_EXT_LOGMASK       = 93,  /* Extended logmask for > 32 bits */
    DIAG_CMD_EVENT_REPORT      = 96,  /* Static Event reporting */
    DIAG_CMD_STREAMING_CONFIG  = 97,  /* Load balancing etc */
    DIAG_CMD_PARM_RETRIEVE     = 98,  /* Parameter retrieval */
    DIAG_CMD_STATUS_SNAPSHOT   = 99,  /* Status snapshot */
    DIAG_CMD_RPC               = 100, /* Used for RPC */
    DIAG_CMD_GET_PROPERTY      = 101,
    DIAG_CMD_PUT_PROPERTY      = 102,
    DIAG_CMD_GET_GUID          = 103, /* GUID requests */
    DIAG_CMD_USER_CMD          = 104, /* User callbacks */
    DIAG_CMD_GET_PERM_PROPERTY = 105,
    DIAG_CMD_PUT_PERM_PROPERTY = 106,
    DIAG_CMD_PERM_USER_CMD     = 107, /* Permanent user callbacks */
    DIAG_CMD_GPS_SESS_CTRL     = 108, /* GPS session control */
    DIAG_CMD_GPS_GRID          = 109, /* GPS search grid */
    DIAG_CMD_GPS_STATISTICS    = 110,
    DIAG_CMD_TUNNEL            = 111, /* Tunneling command code */
    DIAG_CMD_RAM_RW            = 112, /* Calibration RAM control using DM */
    DIAG_CMD_CPU_RW            = 113, /* Calibration CPU control using DM */
    DIAG_CMD_SET_FTM_TEST_MODE = 114, /* Field (or Factory?) Test Mode */
};

/* Subsystem IDs used with DIAG_CMD_SUBSYS; these often obsolete many of
 * the original DM commands.
 */
enum {
    DIAG_SUBSYS_HDR             = 5,  /* High Data Rate (ie, EVDO) */
    DIAG_SUBSYS_GPS             = 13,
    DIAG_SUBSYS_SMS             = 14,
    DIAG_SUBSYS_CM              = 15, /* Call manager */
    DIAG_SUBSYS_NW_CONTROL_6500 = 50, /* for Novatel Wireless MSM6500-based devices */
    DIAG_SUBSYS_NW_CONTROL_6800 = 250 /* for Novatel Wireless MSM6800-based devices */
};

/* HDR subsystem command codes */
enum {
    DIAG_SUBSYS_HDR_STATE_INFO  = 8, /* Gets EVDO state */
};

enum {
    DIAG_SUBSYS_CM_STATE_INFO = 0, /* Gets Call Manager state */
};

/* NW_CONTROL subsystem command codes (only for Novatel Wireless devices) */
enum {
    DIAG_SUBSYS_NW_CONTROL_AT_REQUEST   = 3, /* AT commands via diag */
    DIAG_SUBSYS_NW_CONTROL_AT_RESPONSE  = 4,
    DIAG_SUBSYS_NW_CONTROL_MODEM_STATUS = 7, /* Modem status */
    DIAG_SUBSYS_NW_CONTROL_ERI          = 8, /* Extended Roaming Indicator */
    DIAG_SUBSYS_NW_CONTROL_PRL          = 12,
};

enum {
    DIAG_SUBSYS_NW_CONTROL_MODEM_STATUS_CDMA = 7,
    DIAG_SUBSYS_NW_CONTROL_MODEM_STATUS_WCDMA = 20,
};

/* Generic DM command header */
struct DMCmdHeader {
    guint8 code;
} __attribute__ ((packed));
typedef struct DMCmdHeader DMCmdHeader;

/* DIAG_CMD_SUBSYS */
struct DMCmdSubsysHeader {
    guint8 code;
    guint8 subsys_id;
    guint16 subsys_cmd;
} __attribute__ ((packed));
typedef struct DMCmdSubsysHeader DMCmdSubsysHeader;

/* DIAG_CMD_NV_READ / DIAG_CMD_NV_WRITE */
struct DMCmdNVReadWrite {
    guint8 code;
    guint16 nv_item;
    guint8 data[128];
    guint16 status;
} __attribute__ ((packed));
typedef struct DMCmdNVReadWrite DMCmdNVReadWrite;

/* DIAG_CMD_VERSION_INFO */
struct DMCmdVersionInfoRsp {
    guint8 code;
    char comp_date[11];
    char comp_time[8];
    char rel_date[11];
    char rel_time[8];
    char model[8];
    guint8 _unknown[8];
} __attribute__ ((packed));
typedef struct DMCmdVersionInfoRsp DMCmdVersionInfoRsp;

/* DIAG_CMD_ESN */
struct DMCmdEsnRsp {
    guint8 code;
    guint8 esn[4];
} __attribute__ ((packed));
typedef struct DMCmdEsnRsp DMCmdEsnRsp;

#endif  /* LIBQCDM_DM_COMMANDS_H */
