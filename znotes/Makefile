# New ports collection makefile for:	znotes
# Date created:		2009-11-12
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	znotes
PORTVERSION=	0.3.5
CATEGORIES=	deskutils
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Simple notes based on QT4

USE_QT_VER=	4
OMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

QMAKE_PRO=	${PORTNAME}.pro
QT_LRELEASE=	${LOCALBASE}/bin/lrelease-qt4

do-configure:
	cd ${WRKSRC} && ${QT_LRELEASE} ${QMAKE_PRO} && ${QMAKE} ${QMAKE_PRO}

.include <bsd.port.mk>
