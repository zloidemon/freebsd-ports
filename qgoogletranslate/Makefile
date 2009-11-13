# New ports collection makefile for:	qgoogletranslate
# Date created:		2009-11-13
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	qgoogletranslate
PORTVERSION=	0.1
CATEGORIES=	deskutils
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DISTNAME=	QGoogleTranslate-${PORTVERSION}b-build4-20090309-src

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	This application translates text via Google Translate engine

USE_ZIP=	yes
USE_QT_VER=	4
OMPONENTS=	gui xml qmake_build uic_build moc_build rcc_build network

QMAKE_PRO=	QGoogleTranslate.pro

WRKSRC=		${WRKDIR}/QGoogleTranslate

PLIST_FILES=	bin/${PORTNAME}

do-configure:
	cd ${WRKSRC} && ${QMAKE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/QGoogleTranslate ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
