# Created by: Matt Tosto <datahead4@gmail.com>
# $FreeBSD$

PORTNAME=	liblastfm
PORTVERSION=	1.0.5
CATEGORIES=	audio
MASTER_SITES=	http://cdn.last.fm/client/Linux/
DISTNAME=	Last.fm-2.1.30

MAINTAINER=	datahead4@gmail.com
COMMENT=	Collection of libraries to help integrate Last.fm services

LIB_DEPENDS=	samplerate:${PORTSDIR}/audio/libsamplerate \
		fftw3:${PORTSDIR}/math/fftw3 \
		fftw3f:${PORTSDIR}/math/fftw3-float

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_QT4=	corelib xml network sql gui qtestlib dbus \
		qmake_build moc_build rcc_build uic_build
MAKE_JOBS_UNSAFE=	yes

USE_LDCONFIG=	yes

OPTIONS_DEFINE=		FINGERPRINT TESTS
FINGERPRINT_DESC=	Build the lastfm-fingerprint library
TESTS_DESC=		Build liblastfm tests

OPTIONS_DEFAULT=	FINGERPRINT

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MFINGERPRINT}
CMAKE_ARGS+=	-DBUILD_FINGERPRINT=ON
PLIST_SUB+=	FINGERPRINT=""
.else
CMAKE_ARGS+=	-DBUILD_FINGERPRINT=OFF
PLIST_SUB+=	FINGERPRINT="@comment "
.endif

.if ${PORT_OPTIONS:MTESTS}
CMAKE_ARGS+=	-DBUILD_TESTS=ON
.else
CMAKE_ARGS+=	-DBUILD_TESTS=OFF
.endif

.include <bsd.port.mk>
