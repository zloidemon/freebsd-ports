# New ports collection makefile for:	qtermwidget
# Date created:		2009-10-29
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qtermwidget
PORTVERSION=	0.1
CATEGORIES=	x11
MASTER_SITES=	SF/${PORTNAME}/sources/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	QT4 widget for terminal emulation.

USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

QMAKE_PRO=	${PORTNAME}.pro

WRKSRC=		${WRKDIR}/${PORTNAME}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

.include <bsd.port.mk>
