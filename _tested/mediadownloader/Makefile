# New ports collection makefile for:	mediadownloader
# Date created:		2010-07-24
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	mediadownloader
PORTVERSION=	1.4
CATEGORIES=	multimedia
MASTER_SITES=	SF/googleimagedown/project/v${PORTVERSION}/
DISTNAME=	${PORTNAME}-v${PORTVERSION}-src

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Search and download as many images or videos

LICENSE=	GPLv3

USE_BZIP2=	yes
USE_GL=		gl glu
USE_QT_VER=	4
QT_COMPONENTS=	corelib dbus gui network moc_build opengl phonon \
		rcc_build xml xmlpatterns webkit
QMAKEPRO=	MediaDownloader.pro
PLIST_FILES=	bin/MediaDownloader

WRKSRC=		${WRKDIR}/MediaDownloader

DESKTOP_ENTRIES="MediaDownloadre" "Search and download as many images \
		or videos that fit your search criteria" \
		"${DATADIR}/${PORTNAME}.png" "${PORTNAME}" \
		"Graphics;AudioVideo;Audio;Video;" ${FALSE}

do-configure:
	@${REINPLACE_CMD} -e 's|/usr|${PREFIX}|g' \
		${WRKSRC}/${QMAKEPRO}
	@cd ${WRKSRC} && ${QMAKE} ${QMAKEPRO}

.include <bsd.port.mk>
