# New ports collection makefile for:	clipgrab
# Date created:		2009-12-06
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/multimedia/clipgrab/Makefile,v 1.5 2010/12/29 20:04:24 pgollucci Exp $
#

PORTNAME=	clipgrab
PORTVERSION=	3.1.0.1
CATEGORIES=	multimedia
MASTER_SITES=	http://clipgrab.de/download/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Program to download videos from YouTube and etc

LICENSE=	GPLv3

USE_BZIP2=	yes
USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build \
		rcc_build network dbus webkit

PLIST_FILES=	bin/${PORTNAME} \
		%%DATADIR%%/icon.png \
		%%DATADIR%%/logo.png \
		%%DATADIR%%/logo-gpl.png \
		%%DATADIR%%/logo-qt.png \
		%%DATADIR%%/splash.png
PLIST_DIRS=	%%DATADIR%%

DESKTOP_ENTRIES="Clipgrab" "Download and convert videos from YouTube and etc" \
		"${DATADIR}/icon.png" "${PORTNAME}" \
		"AudioVideo;Audio;Video;" false

post-patch:
	${REINPLACE_CMD} -e 's,img/,share/${PORTNAME}/,g' \
	${WRKSRC}/*.cpp

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/*.png ${DATADIR}

.include <bsd.port.mk>
