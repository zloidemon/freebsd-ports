# New ports collection makefile for:	deadbeef-devel
# Date created:		2010-01-17
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	deadbeef
PORTVERSION=	0.4
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-rc3

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	DeaDBeeF is an audio player for GNU/Linux systems with X11

LIB_DEPENDS=	samplerate.1:${PORTSDIR}/audio/libsamplerate \
		curl.6:${PORTSDIR}/ftp/curl \
		mad.2:${PORTSDIR}/audio/libmad \
		cdio.12:${PORTSDIR}/sysutils/libcdio \

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS=	--disable-alsa --disable-nullout
USE_GNOME=	gtk20 glib20

OPTIONS=	PULSE "PulseAudio output plugin" off\
		GTKUI "standard GTK2 user interface plugin" on\
		VFS "HTTP streaming vfs plugin" on\
		LFM "last.fm/libre.fm scrobbler plugin" on\
		ART "album art loader plugin" on\
		EQ "SuperEQ DSP plugin" on\
		SID "commodore64 SID music player plugin" on\
		FFAP "Monkey's Audio plugin" on\
		VTX "libayemy VTX ZX-Spectrum music player plugin" on\
		ADP "adplug plugin" on\
		HOTKEYS "global hotkeys plugin" on\
		OGG "Ogg Vorbis player plugin" on\
		FFMPEG "FFMPEG plugin for WMA, MPC, TTA, etc" on\
		FLAC "FLAC player plugin" on\
		SNDFILE "libsndfile plugin for PCM wave files" on\
		WAV "wavpack plugin" on\
		CDDA "CD-Audio plugin" on\
		GME "Game Music Emu plugin for NFS, AY, etc" on\
		DUMB "D.U.M.B. plugin for MOD, S3M and other" on\
		NOTIFY "support for OSD notifications into GTKUI plugin" off

.include <bsd.port.pre.mk>

.if defined(WITHOUT_PULSE)
CONFIGURE_ARGS+=	--disable-pulse
.endif

.if defined(WITHOUT_GTKUI)
CONFIGURE_ARGS+=	--disable-gtkui
PLIST_SUB+=	GTKUI="@comment "
.else
PLIST_SUB+=	GKTUI=""
.endif

.if defined(WITHOUT_VFS)
CONFIGURE_ARGS+=	--disable-vfs-curl
PLIST_SUB+=	VFS="@comment "
.else
PLIST_SUB+=	VFS""
.endif

.if defined(WITHOUT_LFM)
CONFIGURE_ARGS+=	--disable-lfm
PLIST_SUB+=	LFM="@comment "
.else
PLIST_SUB+=	LFM=""
.endif

.if defined(WITHOUT_ART)
CONFIGURE_ARGS+=	--disable-artwork
PLIST_SUB+=	ART="@comment "
.else
PLIST_SUB+=	ART=""
.endif

.if defined(WITHOUT_EQ)
CONFIGURE_ARGS+=	--disable-supereq
PLIST_SUB+=	EQ="@comment "
.else
PLIST_SUB+=	EQ=""
.endif

.if defined(WITHOUT_SID)
CONFIGURE_ARGS+=	--disable-sid
PLIST_SUB+=	SID="@comment "
.else
PLIST_SUB+=	SID=""
.endif

.if defined(WITHOUT_FFAP)
CONFIGURE_ARGS+=	--disable-ffap
PLIST_SUB+=	FFAP="@comment "
.else
PLIST_SUB+=	FFAP=""
.endif

.if defined(WITHOUT_VTX)
CONFIGURE_ARGS+=	--disable-vtx
PLIST_SUB+=	VTX="@comment "
.else
PLIST_SUB+=	VTX=""
.endif

.if defined(WITHOUT_ADP)
CONFIGURE_ARGS+=	--disable-adplug
PLIST_SUB+=	ADP="@comment "
.else
PLIST_SUB+=	ADP=""
.endif

.if defined(WITHOUT_HOTKEYS)
CONFIGURE_ARGS+=	--disable-hotkeys
PLIST_SUB+=	HOTKEYS="@comment "
.else
PLIST_SUB+=	HOTKEYS=""
.endif

.if defined(WITHOUT_OGG)
CONFIGURE_ARGS+=	--disable-vorbis
PLIST_SUB+=	OGG="@comment "
.else
LIB_DEPENDS+=	vorbis.4:${PORTSDIR}/audio/libvorbis
PLIST_SUB+=	OGG=""
.endif

.if defined(WITHOUT_FFMPEG)
CONFIGURE_ARGS+=	--disable-ffmpeg
PLIST_SUB+=	FFMPEG="@comment "
.else
PLIST_SUB+=	FFMPEG=""
LIB_DEPENDS+=	avcodec.1:${PORTSDIR}/multimedia/ffmpeg \
		avformat:${PORTSDIR}/multimedia/ffmpeg \
		avutil.1:${PORTSDIR}/multimedia/ffmpeg
.endif

.if defined(WITHOUT_FLAC)
CONFIGURE_ARGS+=	--disable-flac
PLIST_SUB+=	FLAC="@comment "
.else
LIB_DEPENDS+=	FLAC.10:${PORTSDIR}/audio/flac
PLIST_SUB+=	FLAC=""
.endif

.if defined(WITHOUT_SNDFILE)
CONFIGURE_ARGS+=	--disable-sndfile
PLIST_SUB+=	SNDFILE="@comment "
.else
LIB_DEPENDS+=	sndfile.1:${PORTSDIR}/audio/libsndfile
PLIST_SUB+=	SNDFILE=""
.endif

.if defined(WITHOUT_WAV)
CONFIGURE_ARGS+=	--disable-wavpack
PLIST_SUB+=	WAV="@comment "
.else
LIB_DEPENDS+=	wavpack.2:${PORTSDIR}/audio/wavpack
PLIST_SUB+=	WAV=""
.endif

.if defined(WITHOUT_CDDA)
CONFIGURE_ARGS+=	--disable-cdda
PLIST_SUB+=	CDDA="@comment"
.else
PLIST_SUB+=	CDDA=""
.endif

.if defined(WITHOUT_GME)
CONFIGURE_ARGS+=	--disable-gme
.endif

.if defined(WITHOUT_DUMB)
CONFIGURE_ARGS+=	--disable-dumb
.endif

.if defined(WITH_NOTIFY)
CONFIGURE_ARGS+=	--enable-libnotify
.endif

.include <bsd.port.post.mk>
