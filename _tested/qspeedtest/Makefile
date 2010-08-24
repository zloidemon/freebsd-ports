# New ports collection makefile for:	qspeedtest
# Date created:		2010-07-24
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qspeedtest
PORTVERSION=
CATEGORIES=	net
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}_src_rev43

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Testool

USE_QT_VER=	4
QT_COMPONENTS=	corelib network

WRKSRC=		${WRKDIR}

do-configure:
	cd ${WRKDIR} && ${QMAKE}

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
