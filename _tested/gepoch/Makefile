# New ports collection makefile for:	gepoch
# Date created:		2010-06-15
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	gepoch
PORTVERSION=	1.4
CATEGORIES=	misc
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	Epoch${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Epoch is small and handy timeline applicatiion

LINCENSE=	GPLv3

USE_ZIP=	yes
USE_QT_VER=	4
USE_COMPONENTS=	corelib gui qmake_build moc

PLIST_FILES=	bin/${PORTNAME}

WRKSRC=		${WRKDIR}/${DISTNAME}/src

do-configure:
	@cd ${WRKSRC} && ${QMAKE} ${QMAKEFLAGS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/epoch ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
