# New ports collection makefile for:	vacuum-im
# Date created:		2009-12-09
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/net-im/vacuum-im/Makefile,v 1.2 2010/05/10 16:01:33 makc Exp $
#

PORTNAME=	vacuum
PORTVERSION=	1.1.0
CATEGORIES=	net-im
MASTER_SITES=	GOOGLE_CODE
PKGNAMESUFFIX=	-im

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Crossplatform Jabber client

PROJECTHOST=	${PORTNAME}${PKGNAMESUFFIX}

LICENSE=	GPLv3

USE_XZ=	yes
USE_CMAKE=	yes
USE_XORG=	xscrnsaver

USE_QT_VER=	4
USE_LDCONFIG=	yes
QT_COMPONENTS=	gui linguist_build moc_build network \
		qmake_build rcc_build uic_build webkit xml

DESKTOP_ENTRIES="Vacuum-IM" "Modular, crossplatform Jabber client" \
		"${PREFIX}/share/pixmaps/vacuum.png" "${PORTNAME}" \
		"Qt;Network;InstantMessaging;" ${FALSE}

.include <bsd.port.mk>
