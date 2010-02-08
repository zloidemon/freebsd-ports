# New ports collection makefile for:	deadbeef
# Date created:		2010-01-17
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	deadbeef
PORTVERSION=	0.3.3
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	DeaDBeeF is an audio player for GNU/Linux systems with X11

LIB_DEPENDS=	samplerate.1:${PORTSDIR}/audio/libsamplerate \
		curl.5:${PORTSDIR}/ftp/curl \
		vorbis.4:${PORTSDIR}/audio/libvorbis \
		mad.2:${PORTSDIR}/audio/libmad \
		FLAC.10:${PORTSDIR}/audio/flac \
		wavpack.1:${PORTSDIR}/audio/wavpack \
		sndfile.1:${PORTSDIR}/audio/libsndfile \
		cdio.12:${PORTSDIR}/sysutils/libcdio \
		avcodec.1:${PORTSDIR}/multimedia/ffmpeg \
		avformat:${PORTSDIR}/multimedia/ffmpeg \
		avutil.1:${PORTSDIR}/multimedia/ffmpeg

CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"
USE_GNOME=	gtk20 glib20
USE_AUTOTOOLS=	aclocal:110 autoheader:262 libtoolize autoconf:262 automake:110
ACLOCAL_ARGS=	-I ${LOCALBASE}/share/aclocal
AUTOMAKE_ARGS=	-a -c

.include <bsd.port.mk>
