# New ports collection makefile for:	qtresistors
# Date created:		2010-01-10
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qtresistors
PORTVERSION=	0.1
CATEGORIES=	science
MASTER_SITES=	http://qt-apps.org/CONTENT/content-files/
DISTNAME=	118297-qtResistors-201001102229

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Calculate resistance of resistor by the colors on the resistor

USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build

WRKSRC=		${WRKDIR}/qtResistors

PLIST_FILES=	bin/${PORTNAME}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/qtResistors ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
