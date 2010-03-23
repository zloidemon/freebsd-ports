# New ports collection makefile for:	clementine
# Date created:		2010-03-23
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	clementine
PORTVERSION=	0.2
CATEGORIES=	audio
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	A cross-platform music player based on Amarok 1.4

LIB_DEPENDS=	lastfm.0:${PORTSDIR}/audio/liblastfm \
		tag.1:${PORTSDIR}/audio/taglib \
		notify.1:${PORTSDIR}/devel/libnotify \
		xine.1:${PORTSDIR}/multimedia/libxine

PROJECTHOST=	${PORTNAME}-player

USE_CMAKE=	yes
USE_ICONV=	yes
USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build \
		linguist network sql opengl

PLIST_FILES=	bin/${PORTNAME} \
		share/applications/${PORTNAME}.desktop \
		share/icons/hicolor/64x64/apps/application-x-${PORTNAME}.png

.include <bsd.port.mk>
