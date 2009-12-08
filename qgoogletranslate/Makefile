# New ports collection makefile for:	qgoogletranslate
# Date created:		2009-11-13
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qgoogletranslate
PORTVERSION=	0.2
CATEGORIES=	deskutils
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DISTNAME=	QGoogleTranslate-${PORTVERSION}b-build5-20091204-src

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	This application translates text via Google Translate engine

USE_ZIP=	yes
USE_QT_VER=	4
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build network

QMAKE_PRO=	QGoogleTranslate.pro

WRKSRC=		${WRKDIR}/QGoogleTranslate

PLIST_FILES=	bin/${PORTNAME}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/QGoogleTranslate ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
