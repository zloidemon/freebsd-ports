# New ports collection makefile for:	qjson
# Date created:		2009-12-09
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qjson
PORTVERSION=	0.7.1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	The easiest way for managing JSON objects with Qt

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_LDCONFIG=	yes
USE_QT_VER=	4
QT_COMPONENTS=	qmake_build moc_build corelib

WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.mk>
