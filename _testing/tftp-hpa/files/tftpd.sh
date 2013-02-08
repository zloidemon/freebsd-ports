#!/bin/sh
#
# tftp-hpa init script
# Copyright (c) 2006 by Alexey Tsvetnov, vorakl@fbsd.kiev.ua
#
# PROVIDE: tftpd
# REQUIRE: DAEMON
# BEFORE: LOGIN
# KEYWORD: shutdown
#
# Define these tftpd_* variables in one of these files:
#       /etc/rc.conf
#       /etc/rc.conf.local
#       /etc/rc.conf.d/tftpd
#
# tftpd_enable (bool):		Set it to "YES" to enable tftpd.
#				            Default is "NO".
# tftpd_pidfile (path):           Set full path to tftpd.pid.
#                                           Default is "/var/run/tftpd.pid".
# tftpd_remapfile (path):      Set full path to remap file.
#				            Default is "/usr/local/etc/tftpd-remap.conf".
# tftpd_datadir (path):		Set full path to directory with data.
#				            Default is "/var/tftp".
# tftpd_flags (str):        	    Extra flags passed to start command.
#                             	            Default is "-cps -u tftpd -U 037 -B 1468".
#

. /etc/rc.subr

name="tftpd"
rcvar=`set_rcvar`

load_rc_config $name

# DO NOT CHANGE THESE DEFAULT VALUES HERE

: ${tftpd_enable="NO"}
: ${tftpd_pidfile="/var/run/tftpd.pid"}
: ${tftpd_remapfile="/usr/local/etc/tftpd-remap.conf"}
: ${tftpd_datadir="/var/tftp"}
: ${tftpd_flags="-vvcps -u ftp -U 037 -B 1468"}

extra_commands="reload"
start_cmd="tftpd_start"
stop_postcmd="tftpd_poststop"
reload_cmd="tftpd_reload"
required_files="/usr/local/etc/tftpd-remap.conf"
pidfile=$tftpd_pidfile
procname="/usr/local/libexec/in.tftpd"

tftpd_start() {
	/bin/echo -n "Starting tftpd"
	/usr/local/libexec/in.tftpd $tftpd_flags -l -m $tftpd_remapfile $tftpd_datadir
	/bin/ps x | /usr/bin/grep in.tftpd | /usr/bin/grep -v grep | /usr/bin/awk '{print $1}' > $tftpd_pidfile
	/bin/echo "."
}

tftpd_poststop() {
	/bin/rm -f $tftpd_pidfile
}

tftpd_reload() {
	/bin/kill -1 `cat $tftpd_pidfile`
}

run_rc_command "$1"
