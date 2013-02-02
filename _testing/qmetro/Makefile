# New ports collection makefile for:	qmetro
# Date created:		2012-01-06
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qmetro
PORTVERSION=	0.5.2
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/source/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Map of the transport system for many city subways

LICENSE=	GPLv2

USE_ZIP=	yes
USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

do-configure:
	cd ${WRKSRC} && ${QMAKE} ${QMAKEFLAGS} PREFIX=${PREFIX}

.include <bsd.port.mk>
