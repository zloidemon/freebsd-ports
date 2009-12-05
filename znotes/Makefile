# New ports collection makefile for:	znotes
# Date created:		2009-11-12
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	znotes
PORTVERSION=	0.3.7
CATEGORIES=	deskutils
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Simple notes based on QT4

USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

QMAKE_PRO=	${PORTNAME}.pro
PLIST_FILES=	bin/${PORTNAME} \
		share/pixmaps/${PORTNAME}.png

do-configure:
	cd ${WRKSRC} && ${QMAKE} ${QMAKE_PRO}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/znotes.png ${PREFIX}/share/pixmaps/

.include <bsd.port.mk>
