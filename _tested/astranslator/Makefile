# New ports collection makefile for:	astranslator
# Date created:		2009-11-17
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	astranslator
PORTVERSION=	0.9.12.20
CATEGORIES=	deskutils
MASTER_SITES=	http://alexsnet.ru/wp-content/uploads/2009/02/
DISTNAME=	astranslator-0961

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	This application translates text via Google Translate engine

USE_ZIP=	yes

USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build network

QMAKE_PRO=	Translator.pro

WRKSRC=		${WRKDIR}/ASTranslator

PLIST_FILES=	bin/${PORTNAME}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/Translator ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
