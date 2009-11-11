# New ports collection makefile for:	qterminal
# Date created:		2009-10-29
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qterminal
PORTVERSION=	0.1.4
CATEGORIES=	x11
MASTER_SITES=	http://www.qt-apps.org/CONTENT/content-files/	
DISTNAME=	92158-${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	QT based multi-tab terminal emulator.

USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

QMAKE_PRO=     ${PORTNAME}.pro 

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

do-configure:
	cd ${WRKSRC} && ${QMAKE}
		
.include <bsd.port.mk>
