# New ports collection makefile for:	vacuum-im
# Date created:		2009-12-09
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	vacuum-im
PORTVERSION=
CATEGORIES=	net-im
MASTER_SITES=	
DISTNAME=	${PORTNAME}.r916

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Crossplatform Jabber client

USE_BZIP2=	yes
USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

QMAKE_PRO=	vacuum.pro

WRKSRC=		${WRKDIR}/${PORTNAME}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

.include <bsd.port.mk>
