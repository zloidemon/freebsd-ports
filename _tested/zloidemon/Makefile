# New ports collection makefile for:	zloidemon
# Date created:		2010-07-20
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	zloidemon
PORTVERSION=	0.1
CATEGORIES=	misc
MASTER_SITES=	#
#MASTER_SITE_SUBDIR=
#PKGNAMEPREFIX=
#PKGNAMESUFFIX=
#DISTNAME=
#EXTRACT_SUFX=
#DISTFILES=
#DIST_SUBDIR=	${PORTNAME}
#EXTRACT_ONLY=

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	zloidemon configs

RUN_DEPENDS=	axel:${PORTSDIR}/ftp/axel \
		cdf:${PORTSDIR}/sysutils/cdf \
		colordiff:${PORTSDIR}/textproc/colordiff \
		htop:${PORTSDIR}/sysutils/htop \
		keychain:${PORTSDIR}/security/keychain \
		most:${PORTSDIR}/sysutils/most \
		p7zip:${PORTSDIR}/archivers/p7zip \
		psearch:${PORTSDIR}/ports-mgmt/psearch \
		portmaster:${PORTSDIR}/ports-mgmt/portmaster \
		rsync:${PORTSDIR}/net/rsync \
		sudo:${PORTSDIR}/security/sudo \
		vim:${PORTSDIR}/editors/vim-lite \
		unrar:${PORTSDIR}/archivers/unrar \
		unzip:${PORTSDIR}/archivers/unzip
		wget:${POTSDIR}/ftp/wget \
		zsh:${PORTSDIR}/shells/zsh

NO_BUILD=	yes

OPTIONS=	DEV "Devloper stuff" on \
		DES "Some desktop stuff" on \
		IM "Chating stuff" on \
		EMU "Emulation stuff" on \
		MEDIA "Multimedia stuff" on \
		NET "Net stuff" on \
		P2P "p2p stuff" on \
		SPELL "Spell checker" on \
		WM "WM and system monitors" on

.include <bsd.port.pre.mk>

.if defined(WITH_DES)
RUN_DEPENDS+=	mc:${PORTSDIR}/misc/mc \
		mutt:${PORTSDIR}/mail/mutt \
		opera:${PORSDIR}/www/opera \
		pinentry:${PORTSDIR}/security/pinentry \
		thunderbird:${PORTSDIR}/mail/thunderbird \
		urxvt:${PORTSDIR}/x11/rxvt-unicode

BUILD_DEPENDS+=	lib/X11/fonts/terminus-font/fonts.dir:${PORTSDIR}/x11-fonts/terminus-font
.endif

.if defined(WITH_DEV)
RUN_DEPENDS+=	git:${PORTSDIR}/devel/git \
		hg:${PORTSDIR}/devel/mercurial \
		port:${PORTSDIR}/ports-mgmt/porttools \
		portlint:${PORTSDIR}/ports-mgmt/portlint \
		svn:${PORTSDIR}/devel/subversion
.endif

.if defined(WITH_IM)
RUN_DEPENDS+=	bitlbee:${PORTSDIR}/irc/bitlbee \
		pidgin:${PORTSDIR}/net-im/pidgin \
		tkabber:${PORTSDIR}/net-im/tkabber-devel \
		xchat:${PORTSDIR}/irc/xchat

BUILD_DEPENS+=	tkabber:${PORTSDIR}/net-im/tkabber-plugins
.endif

.if defined(WITH_EMU)
RUN_DEPENDS+=	qemu:${PORTSDIR}/emulators/qemu \
		VirtualBox:${PORTSDIR}/emulators/virtualbox-ose
.endif

.if defined(WITH_MEDIA)
RUN_DEPENDS+=	deadbeef:${PORTSDIR}/audio/deadbeef \
		mplayer:${PORTSDIR}/multimedia/mplayer \
		qmpdclient:${PORTSDIR}/audio/qmpdclient	\
		vlc:${PORTSDIR}/multimedia/vlc \
		youtube-dl:${PORTSDIR}/www/youtube_dl
.endif

.if defined(WITH_NET)
RUN_DEPENDS+=	arping:${PORTSDIR}/net/arping \
		kismet:${PORTSDIR}/net-mgmt/kismet \
		nc:${POTSDIR}/net/netcat \
		nmap:${PORTSDIR}/security/nmap \
		minicom:${PORTSDIR}/comms/minicom \
		mpd5:${PORTSDIR}/net/mpd5 \
		privoxy:${PORTSDIR}/www/privoxy \
		vidalia:${PORTSDIR}/net-mgmt/vidalia
.endif

.if defined(WITH_P2P)
RUN_DEPENDS+=	eiskaltdc:${PORTSDIR}/net-p2p/eiskaltdc \
		transmission:${PORTSDIR}/net-p2p/transmission
.endif

.if defined(WITH_SPELL)
RUN_DEPENDS+=	aspell:${PORTSDIR}/textproc/aspell
BUILD_DEPENDS+=	share/aspell/ru.multi:${PORTSDIR}/russian/aspell
.endif

.if defined(WITH_WM)
RUN_DEPENDS+=	awesome:${PORTSDIR}/x11-wm/awesome \
		conky:${PORTSDIR}/sysutils/conky \
		conkyForecast:${PORTSDIR}/deskutils/conkyforecast
.endif

.include <bsd.port.post.mk>
